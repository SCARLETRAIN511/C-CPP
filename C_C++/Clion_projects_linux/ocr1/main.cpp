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


using namespace std;
using namespace cv;
using namespace ml;
ostringstream oss;
int num = -1;
Mat dealimage;
Mat src;
Mat yangben_gray;
Mat yangben_thresh;

int main()
{
    //核心思路：//获取一张图片后会将图片特征写入到容器中，
    //紧接着会将标签写入另一个容器中，这样就保证了特征
    //  和标签是一一对应的关系。
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
    for (int p = 0; p < classsum; p++)//依次提取0到9文件夹中的图片
    {
        oss << "C:/Users/tangj/Desktop/mnist_train/";
        num += 1;//num从0到9
        int label = num;
        oss << num << "/*.jpg";//图片名字后缀，oss可以结合数字与字符串
        string pattern = oss.str();//oss.str()输出oss字符串，并且赋给pattern
        oss.str("");//每次循环后把oss字符串清空
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


            //注意：我们简单粗暴将整个图的所有像素作为了特征，因为我们关注更多的是整个的训练过程
            //，所以选择了最简单的方式完成特征提取工作，除此中外，
            //特征提取的方式有很多，比如LBP，HOG等等
            //我们利用reshape()函数完成特征提取,
            //eshape(1, 1)的结果就是原图像对应的矩阵将被拉伸成一个一行的向量，作为特征向量。
            dealimage = dealimage.reshape(1, 1);//图片序列化
            trainingData.push_back(dealimage);//序列化后的图片依次存入
            labels.push_back(label);//把每个图片对应的标签依次存入
        }
    }
    //图片数据和标签转变下
    Mat(trainingData).copyTo(traindata);//复制
    traindata.convertTo(traindata, CV_32FC1);//更改图片数据的类型，必要，不然会出错
    Mat(labels).copyTo(clas);//复制


    ////===============================创建SVM模型===============================////
    // 创建分类器并设置参数
    Ptr<SVM> SVM_params =SVM::create();
    SVM_params->setType(SVM::C_SVC);//C_SVC用于分类，C_SVR用于回归
    SVM_params->setKernel(SVM::LINEAR);  //LINEAR线性核函数。SIGMOID为高斯核函数

    SVM_params->setDegree(0);//核函数中的参数degree,针对多项式核函数;
    SVM_params->setGamma(1);//核函数中的参数gamma,针对多项式/RBF/SIGMOID核函数;
    SVM_params->setCoef0(0);//核函数中的参数,针对多项式/SIGMOID核函数；
    SVM_params->setC(1);//SVM最优问题参数，设置C-SVC，EPS_SVR和NU_SVR的参数；
    SVM_params->setNu(0);//SVM最优问题参数，设置NU_SVC， ONE_CLASS 和NU_SVR的参数；
    SVM_params->setP(0);//SVM最优问题参数，设置EPS_SVR 中损失函数p的值.
    //结束条件，即训练1000次或者误差小于0.01结束
    SVM_params->setTermCriteria(TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 1000, 0.01));

    //训练数据和标签的结合
    Ptr<TrainData> tData = TrainData::create(traindata, ROW_SAMPLE, clas);

    // 训练分类器
    SVM_params->train(tData);//训练

    //保存模型
    //SVM_params->save("C:/Users/zhang/Desktop/opencv——实例/小案例/车牌检测/基于adaboost机器学习/字符识别svm.xml");
    cout << "训练好了！！！" << endl;


    ////===============================预测部分===============================////
    Mat src = imread("C:/Users/tangj/Desktop/0.jpg");
    cvtColor(src, src, COLOR_BGR2GRAY);
    threshold(src, src, 0, 255, THRESH_OTSU);
    imshow("原图像", src);
    Mat input;
    src = src.reshape(1, 1);//输入图片序列化
    input.push_back(src);
    input.convertTo(input, CV_32FC1);//更改图片数据的类型，必要，不然会出错

    float r = SVM_params->predict(input);   //对所有行进行预测
    cout << r << endl;
    waitKey(0);
    return 0;
}
