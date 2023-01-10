#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

int main(){
  std::string src_file = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/goldcoast.jpg";
  cv::Mat img_src = cv::imread(src_file, 1);
  cv::Mat img_hist = cv::Mat::zeros(100, 255, CV_8UC1);
  cv::Mat img_dst, gray, histogram;

  if(!img_src.data){
    std::cout << "error" << std::endl;
    return -1;
  }

  cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
  img_src.convertTo(img_dst, img_src.type(), -1.0, 255.0);
  cv::cvtColor(img_src, gray, cv::COLOR_BGR2GRAY);

  const int hdims[] = {256};
  const float hranges[] = {0, 256};
  const float * ranges[] = {hranges};

  cv::calcHist(&gray, 1, 0, cv::Mat(), histogram, 1, hdims, ranges);

  double hist_min, hist_max;
  minMaxLoc(histogram, &hist_min, &hist_max);

  for(int i=0;i <= 255;i++){
    int v = cv::saturate_cast<int>(histogram.at<float>(i));
    cv::line(img_hist, cv::Point(i, img_hist.rows), cv::Point(i, img_hist.rows * (v/hist_max)), cv::Scalar(255, 255, 255));
    cv::imshow("histogram", img_hist);
  }

  cv::imshow("image", img_src);
  cv::imshow("negaposi", img_dst);

  cv::waitKey(0);
  return 0;
}
