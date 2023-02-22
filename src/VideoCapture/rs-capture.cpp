#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

std::string win_src = "src";

int main(int argc, char **argv){
  cv::Mat img_src, resize_src;
  cv::VideoCapture capture(8);
  if(!capture.isOpened()){
    std::cout << "error" << std::endl;
    return 0;
    }

  cv::namedWindow(win_src, cv::WINDOW_AUTOSIZE);

  while(1){
    capture >> img_src;
    cv::resize(img_src, resize_src, cv::Size(), 0.7, 0.7);
    cv::imshow(win_src, resize_src);
    if(cv::waitKey(1) == 'q') break;
  }

  capture.release();
  return 0;
}
