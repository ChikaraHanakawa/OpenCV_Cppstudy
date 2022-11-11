#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
  cv::Mat img;
  img = cv::Mat::zeros(cv::Size(800,240), CV_8UC3);
  cv::rectangle(img, cv::Point(0,0), cv::Point(100,240), cv::Scalar(255,255,255), -1);
  cv::rectangle(img, cv::Point(100,0), cv::Point(200,240), cv::Scalar(0,220,225), -1);
  cv::rectangle(img, cv::Point(200,0), cv::Point(300,240), cv::Scalar(233,160,0), -1);
  cv::rectangle(img, cv::Point(300,0), cv::Point(400,240), cv::Scalar(0,255,0), -1);
  cv::rectangle(img, cv::Point(400,0), cv::Point(500,240), cv::Scalar(127,0,228), -1);
  cv::rectangle(img, cv::Point(500,0), cv::Point(600,240), cv::Scalar(0,0,255), -1);
  cv::rectangle(img, cv::Point(600,0), cv::Point(700,240), cv::Scalar(255,0,0), -1);
  cv::imshow("collor bar", img);
  cv::waitKey(0);
  cv::destroyWindow("collor bar");
  return 0;
}
