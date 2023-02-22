#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/morphological.jpeg";
  cv::Mat image_src = cv::imread(file_src, 1);
  cv::Mat image_dst, resize_src, resize_dst;

  if(!image_src.data){
    std::cout << "error" << std::endl;
    return 0;
  }

  cv::namedWindow("src", cv::WINDOW_NORMAL);
  cv::namedWindow("dst", cv::WINDOW_NORMAL);

  cv::Mat element4 = (cv::Mat_<uchar>(3,3) << 0, 1, 0, 1, 1, 1, 0, 1, 0);
  cv::Mat element8 = (cv::Mat_<uchar>(3,3) << 1, 1, 1, 1, 1, 1, 1, 1, 1);
  //cv::dilate(image_src, image_dst, element8, cv::Point(-1, -1), 1);
  cv::erode(image_src, image_dst, element4, cv::Point(-1, -1), 1);
  
  cv::resize(image_src, resize_src, cv::Size(), 2.0, 2.0);
  cv::resize(image_dst, resize_dst, cv::Size(), 2.0, 2.0);

  cv::imshow("src", resize_src);
  cv::imshow("dst", resize_dst);

  cv::waitKey(0);
  return 0;
}
