#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

std::string win_src = "src";
std::string win_dst = "dst";

int main(int argc, char **argv){
  cv::Mat img_src, img_dst;
  cv::Mat img_hsv, img_bin;

  cv::VideoCapture capture(0);
  if(!capture.isOpened()){
    std::cout << "error" << std::endl;
    return 0;
    }

  cv::cvtColor(img_src, img_hsv, cv::COLOR_BGR2HSV, 3);

  //cv::Scalar under = cv::Scalar(50, 50, 50);
  //cv::Scalar high = cv::Scalar(80, 255, 255);

  cv::inRange(img_hsv, 255, 100, img_bin);
  img_src.copyTo(img_dst, img_bin);

  //cv::namedWindow(win_src, cv::WINDOW_AUTOSIZE);
  //cv::namedWindow(win_dst, cv::WINDOW_AUTOSIZE);

  while(1){
    capture >> img_src;
    //cv::flip(img_src, img_dst, 0);
    
    cv::imshow(win_src, img_src);
    cv::imshow(win_dst, img_dst);

    if(cv::waitKey(1) == 'q') break;
  }

  capture.release();
  return 0;
}
