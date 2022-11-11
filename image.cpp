#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

std::string win_src = "src";
std::string win_dst = "dst";

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/waifu.png";
  std::string file_dst = "mirror.png";
  cv::Mat img_src = cv::imread(file_src, 1);

  cv::Mat img_dst;
  if(!img_src.data){
    std::cout << "error" << std::endl;
    return -1;
  }
  cv::namedWindow(win_src, cv::WINDOW_AUTOSIZE);
  cv::namedWindow(win_dst, cv::WINDOW_AUTOSIZE);

  cv::flip(img_src, img_dst, 0);

  cv::imshow(win_src, img_src);
  cv::imshow(win_dst, img_dst);

  cv::waitKey(0);
  return 0;
}
