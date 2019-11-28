#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

int main() {
    Mat myMat= imread("../0.jpg");
    namedWindow("huaQ");
    imshow("huaQ",myMat);
    waitKey();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
