#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

int main(int argc, char **argv){
  cv::Mat img_src, resize_src, img_tmp, img_dst;
  cv::VideoCapture capture(8);

  if(!capture.isOpened()){
    std::cout << "error" << std::endl;
    return 0;
  }

  while(1){
    capture >> img_src;
    cv::imshow("src", img_src);

    if(cv::waitKey(1) == 's'){
      cv::Sobel(img_src, img_tmp, CV_32F, 1, 0, 3);
      cv::convertScaleAbs(img_tmp, img_dst, 1, 0);
      cv::imwrite("sobel.jpg", img_dst);
    }
    if(cv::waitKey(2) == 'q') break;
  }

  capture.release();
  return 0;
}
