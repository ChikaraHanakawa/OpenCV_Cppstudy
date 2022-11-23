#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

std::string win_src = "src";
std::string win_dst = "dst";

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/ball.JPG";
  cv::Mat img_dst, img_hsv, img_bin;
  cv::Mat resize_src, resize_hsv, resize_dst;
  cv::Mat img_src = cv::imread(file_src, 1);

  if(!img_src.data){
    std::cout << "error" << std::endl;
    return -1;
  }

  cv::Scalar low = cv::Scalar(0, 50, 50);
  cv::Scalar high = cv::Scalar(50, 200, 200);

  cv::cvtColor(img_src, img_hsv, cv::COLOR_BGR2HSV, 3);

  cv::inRange(img_hsv, low, high, img_bin);
  img_src.copyTo(img_dst, img_bin);

  cv::resize(img_src, resize_src, cv::Size(), 0.2, 0.2);
  cv::resize(img_hsv, resize_hsv, cv::Size(), 0.2, 0.2);
  cv::resize(img_dst, resize_dst, cv::Size(), 0.2, 0.2);

  cv::namedWindow(win_src, cv::WINDOW_AUTOSIZE);
  cv::namedWindow(win_dst, cv::WINDOW_AUTOSIZE);

  cv::imshow(win_src, resize_src);
  cv::imshow("hsv", resize_hsv);
  cv::imshow(win_dst, resize_dst);

  cv::waitKey(0);
  return 0;
}
