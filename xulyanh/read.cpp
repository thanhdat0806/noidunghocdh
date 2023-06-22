#include <iostream>
using namespace std;

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>     // Basic OpenCV structures (cv::Mat)
// using namespace cv;

int main() {
    cv::Mat img = cv::imread("london.jpg");
    cout << "img.shape " << img.size << endl;
}