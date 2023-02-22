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

  cv::line(img, cv::Point(10,0), cv::Point(10,240), cv::Scalar(255,0,0), 3, cv::LINE_4);
  cv::line(img, cv::Point(50,0), cv::Point(50,240), cv::Scalar(0,255,0), 3, cv::LINE_8);
  cv::line(img, cv::Point(90,0), cv::Point(90,240), cv::Scalar(0,0,255), 3, cv::LINE_AA);

  cv::circle(img, cv::Point(150,120), 45, cv::Scalar(255,220,0), 4, cv::LINE_4);
  cv::circle(img, cv::Point(250,120), 45, cv::Scalar(0,160,233), -1);

  cv::putText(img, "studing", cv::Point(305,120), cv::FONT_HERSHEY_SIMPLEX, 0.8, cv::Scalar(255,0,255), 3, cv::LINE_AA);
  cv::putText(img, "OpenCV!", cv::Point(305,170), cv::FONT_HERSHEY_SIMPLEX, 0.8, cv::Scalar(228,0,127), 3);

  cv::imshow("collor bar", img);

  cv::waitKey(0);
  cv::destroyWindow("collor bar");
  return 0;
}
