#include<iostream>
#include <opencv2/opencv.hpp>

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/glass.jpg";
  cv::Mat image_src = cv::imread(file_src, 1);
  cv::Mat image_dst, image_tmp, resize_src, resize_dst;
  float k = 1.0;

  if(!image_src.data){
    std::cout << "error" << std::endl;
    return 0;
    }
  
  cv::namedWindow("src", cv::WINDOW_AUTOSIZE);
  cv::namedWindow("dst", cv::WINDOW_AUTOSIZE);

  cv::Mat op = cv::Mat::ones(3,3,CV_32F) * k * (-1);
  op.at<float> (1,1) = 1 + 8 * k;

  filter2D(image_src, image_tmp, CV_32F, op);
  cv::convertScaleAbs(image_tmp, image_dst, 1, 0);

  cv::resize(image_src, resize_src, cv::Size(), 0.7, 0.7);
  cv::resize(image_dst, resize_dst, cv::Size(), 0.7, 0.7);

  cv::imshow("src", resize_src);
  cv::imshow("dst", resize_dst);

  cv::waitKey(0);
  return 0;
}
