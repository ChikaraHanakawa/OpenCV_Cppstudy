#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/noise.jpg";
  cv::Mat img_src = cv::imread(file_src, 1);
  cv::Mat img_dst;

  if(!img_src.data){
    std::cout << "error" << std::endl;
    return -1;
  }

  cv::namedWindow("befor", cv::WINDOW_AUTOSIZE);
  cv::namedWindow("after", cv::WINDOW_AUTOSIZE);

  cv::blur(img_src, img_dst, cv::Size(3,3));

  cv::imshow("befor", img_src);
  cv::imshow("after", img_dst);

  cv::waitKey(0);
  return 0;
}
