#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
  cv::Mat img;
  img = cv::Mat::zeros(cv::Size(800,240), CV_8UC3);
  
  cv::imshow("collor bar", img);
  cv::waitKey(0);
  cv::destroyWindow("collor bar");
  return 0;
}
