#include <stdio.h>
#include <time.h>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgproc/types_c.h>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/ml/ml.hpp>
#include <sys/io.h>
#include <opencv2/core/utility.hpp>

using namespace std;
using namespace cv;
using namespace ml;
ostringstream oss;
int num = -1;
Mat dealimage;
Mat src;
Mat yangben_gray;
Mat yangben_thresh;

int main() {
    //GET THE image and set the feature into the classifier
    //add the tag to the classifier
    ////===============================读取训练数据===============================////
    const int classsum = 10;//图片共有10类，可修改
    const int imagesSum = 500;//每类有张图片，可修改
    //训了样本图片与测试图片的尺寸应该一样
    const int imageRows = 28;//图片尺寸
    const int imageCols = 28;
    //训练数据，每一行一个训练图片
    Mat trainingData;
    //训练样本标签
    Mat labels;
    //最终的训练样本标签
    Mat clas;
    //最终的训练数据
    Mat traindata;
    //////////////////////从指定文件夹下提取图片//////////////////
    for (int p = 0; p < classsum; p++)//get pictures from file 0-9
    {
        oss << "/home/jt2418/Desktop/coding/python_vs/mnist_train/";
        num += 1;//num从0到9
        int label = num;
        oss << num << "/*.png";//read the .png file
        string pattern = oss.str();
        oss.str("");
        vector<Mat> input_images;
        vector<String> input_images_name;
        glob(pattern, input_images_name, false);
        //为false时，仅仅遍历指定文件夹内符合模式的文件，当为true时，会同时遍历指定文件夹的子文件夹
        //此时input_images_name存放符合条件的图片地址
        int all_num = input_images_name.size();
        //文件下总共有几个图片
        //cout << num << ":总共有" << all_num << "个图片待测试" << endl;

        for (int i = 0; i < imagesSum; i++)//依次循环遍历每个文件夹中的图片
        {
            cvtColor(imread(input_images_name[i]), yangben_gray, COLOR_BGR2GRAY);//灰度变换
            threshold(yangben_gray, yangben_thresh, 0, 255, THRESH_OTSU);//二值化
            //循环读取每张图片并且依次放在vector<Mat> input_images内
            input_images.push_back(yangben_thresh);
            dealimage = input_images[i];


            //Reshape to get the features in the picture
            //eshape(1, 1) is a 1 dimension vector。
            dealimage = dealimage.reshape(1, 1);//图片序列化
            trainingData.push_back(dealimage);//序列化后的图片依次存入
            labels.push_back(label);//把每个图片对应的标签依次存入
        }
    }
    Mat(trainingData).copyTo(traindata);//copy
    traindata.convertTo(traindata, CV_32FC1);//change the pictures' file names
    Mat(labels).copyTo(clas);


    ////===============================Create the svm===============================////
    // Set the classifier
    Ptr<SVM> SVM_params = SVM::create();
    SVM_params->setType(SVM::C_SVC);//C_SVC用于分类，C_SVR用于回归
    SVM_params->setKernel(SVM::LINEAR);  //LINEAR线性核函数。SIGMOID为高斯核函数

    SVM_params->setDegree(0);//核函数中的参数degree,针对多项式核函数;
    SVM_params->setGamma(1);//核函数中的参数gamma,针对多项式/RBF/SIGMOID核函数;
    SVM_params->setCoef0(0);//核函数中的参数,针对多项式/SIGMOID核函数；
    SVM_params->setC(1);//SVM最优问题参数，设置C-SVC，EPS_SVR和NU_SVR的参数；
    SVM_params->setNu(0);//SVM最优问题参数，设置NU_SVC， ONE_CLASS 和NU_SVR的参数；
    SVM_params->setP(0);//SVM最优问题参数，设置EPS_SVR 中损失函数p的值.
    //end the training
    SVM_params->setTermCriteria(TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 1000, 0.01));

    //训练数据和标签的结合
    Ptr<TrainData> tData = TrainData::create(traindata, ROW_SAMPLE, clas);

    // train the classifier
    SVM_params->train(tData);//train
    cout << "<-----------------------Finish Training------------------------>" << endl;

    ////===============================Predict===============================////
    string file_name;
    string file_FullName;
    cout << "type any number to start" << endl;
    cin >> file_name;
    while (file_name != "stop") {
        cout << "Input the file name on the desktop" << endl;

        cin >> file_name;
        file_FullName = "/home/jt2418/Desktop/" + file_name;
        Mat src = imread(file_FullName);
        cvtColor(src, src, COLOR_BGR2GRAY);
        threshold(src, src, 0, 255, THRESH_OTSU);
        imshow("Originl Picture", src);
        Mat input;
        src = src.reshape(1, 1);//输入图片序列化
        input.push_back(src);
        input.convertTo(input, CV_32FC1);//change the data type

        float r = SVM_params->predict(input);   //predict the number;
        cout << "the number is ";
        cout << r << endl;
        cout << "----------------------------------Recognition completed, Next picture-------------------------------------\n" << endl;
    }
    return 0;

}
