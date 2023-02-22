#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/noise.jpg";
  cv::Mat img_src = cv::imread(file_src, 1);
  cv::Mat img_gau, img_bil;

  if(!img_src.data){
    std::cout << "error" << std::endl;
    return 0;
  }

  cv::namedWindow("src", cv::WINDOW_AUTOSIZE);
  cv::namedWindow("gaussian", cv::WINDOW_AUTOSIZE);
  cv::namedWindow("bilateral", cv::WINDOW_AUTOSIZE);

  cv::GaussianBlur(img_src, img_gau, cv::Size(11, 11), 1);
  cv::bilateralFilter(img_src, img_bil, 11, 50, 100);

  cv::imshow("src", img_src);
  cv::imshow("gaussian", img_gau);
  cv::imshow("bilateral", img_bil);

  cv::waitKey(0);
  return 0;
}
