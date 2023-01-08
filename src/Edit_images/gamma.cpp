#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/roundabout.jpg";
  cv::Mat img_src = cv::imread(file_src, 1);
  cv::Mat img_dst, resize_src, resize_dst;

  if(!img_src.data){
    std::cout << "error" << std::endl;
    return -1;
  }

  cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
  double gamma = 2.0;
  cv::Mat lut(256, 1, CV_8U);
  for(int i = 0;i < 256;i++){
    lut.data[i] = (unsigned char) (255.0 * pow(i / 255.0, 1.0 / gamma));
  }

  LUT(img_src, lut, img_dst);

  cv::resize(img_src, resize_src, cv::Size(), 0.2, 0.2);
  cv::resize(img_dst, resize_dst, cv::Size(), 0.2, 0.2);

  cv::imshow("image", resize_src);
  cv::imshow("result", resize_dst);

  cv::waitKey(0);
  return 0;
}
