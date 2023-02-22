#include <opencv2/opencv.hpp>
#include <iostream>

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/glass.jpg";
  cv::Mat image_src = cv::imread(file_src, 1);
  cv::Mat image_dst, resize_src, resize_dst;

  if(!image_src.data){
    std::cout << "error" << std::endl;
    return 0;
  }

  cv::namedWindow("src", cv::WINDOW_NORMAL);
  int thresh = 200;
  cv::threshold(image_src, image_dst, thresh, 255, cv::THRESH_BINARY);

  cv::resize(image_src, resize_src, cv::Size(), 0.5, 0.5);
  cv::resize(image_dst, resize_dst, cv::Size(), 0.5, 0.5);

  cv::imshow("src", resize_src);
  cv::imshow("dst", resize_dst);

  cv::waitKey(0);
  return 0;
}
