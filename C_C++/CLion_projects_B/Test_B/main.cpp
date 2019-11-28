#include "iostream"
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
    Mat img = imread("../res/1.jpg");
    if (img.empty()) {
        cout << "Error" << endl;
        return -1;
    }
    imshow("Lena", img);
    waitKey();
    return 0;
}
