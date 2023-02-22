#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/boxobject.jpg";
  cv::Mat img_src = cv::imread(file_src, 1);
  cv::Mat img_tmp, img_dst;

  if(!img_src.data){
    std::cout << "error" << std::endl;
    return 0;
  }

  cv::namedWindow("before", cv::WINDOW_AUTOSIZE);
  cv::namedWindow("result", cv::WINDOW_AUTOSIZE);

  cv::Sobel(img_src, img_tmp, CV_32F, 1, 0, 3);
  cv::convertScaleAbs(img_tmp, img_dst, 1, 0);

  cv::imshow("before", img_src);
  cv::imshow("result", img_dst);

  cv::waitKey(0);
  return 0;
}
