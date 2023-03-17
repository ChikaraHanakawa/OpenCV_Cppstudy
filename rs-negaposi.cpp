#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

std::string win_src = "src";

int main()(int argc, char **argv){
  cv::Mat img_src, resize_src, img_tmp, img_dst, win_dst;
  cv::VideoCapture capture(8);
  if(!capture.isOpened()){
    std::cout << "error" << std::endl;
    return 0;
  }

  cv::namedWindow(win_src, cv::WINDOW_AUTOSIZE);
  cv::namedWindow(win_dst, cv::WINDOW_AUTOSIZE);

  while(1){
    capture >> img_src;
    cv::Sobel(img_src, img_tmp, CV_32F, 1, 0, 3);
    cv::convertScalAbs(img_tmp, img_dst, 1, 0);
    cv::resize(img_src, resize_src, cv::Size(), 0.7, 0.7);
    cv::resize(img_dst, resize_dst, cv::Size(), 0.7, 0.7);
    cv::imshow(win_src, resize_src);
    cv::imshow(win_dst, resize_dst);
  }

  capture.release();
  return 0;
}
