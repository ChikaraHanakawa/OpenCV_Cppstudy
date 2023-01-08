#define _CRT_SECURE_NO_WARNIGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

int main(){
  std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/scream.jpg";
  cv::Mat img_src = cv::imread(file_src, 1);
  cv::Mat img_histogram = cv::Mat::zeros(100, 256, CV_8UC1);
  cv::Mat histogram, img_gray;

  if(!img_src.data){
    std::cout << "error" << std::endl;
    return -1;
  }
  cv::namedWindow("src", cv::WINDOW_AUTOSIZE);
  cv::cvtColor(img_src, img_gray, cv::COLOR_BGR2GRAY);
 
  const int hdims[] = {256};
  const float hranges[] = {0, 256};
  const float * ranges[] = {hranges};
  
  cv::calcHist(&img_gray, 1, 0, cv::Mat(), histogram, 1, hdims, ranges); 

  double hist_min, hist_max;
  minMaxLoc(histogram, &hist_min, &hist_max);

  for(int i = 0; i <= 255; i++){
    int v = cv::saturate_cast<int>(histogram.at<float>(i));
    //std::cout << i << "" << v << std::endl;
    cv::line(img_histogram, cv::Point(i, img_histogram.rows), cv::Point(i, img_histogram.rows-img_histogram.rows * (v/hist_max)), cv::Scalar(255, 255, 255));
    cv::imshow("histogram", img_histogram);
  }

  cv::imshow("src", img_src);
  cv::imshow("gray", img_gray);

  cv::waitKey(0);
  return 0;
}
