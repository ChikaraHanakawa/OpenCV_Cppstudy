#include <iostream>
#include <opencv2/opencv.hpp>

void mouse_callback(int event, int x, int y, int flags, void *userdata){
  if (event == cv::EVENT_LBUTTONDOWN){
    std::cout << "Left mouse button is pressed." << "(width:" << x << "height:" << y << ")" << std::endl;
  }
}

int main(int argc, char **argv){
  cv::Mat img_src, win_src;
  cv::VideoCapture capture(8);

  cv::namedWindow("example", cv::WINDOW_NORMAL);
  while(1){
    capture >> img_src;
    cv::resize(img_src, win_src, cv::Size(), 0.7, 0.7);
    cv::imshow("example", win_src);
    cv::setMouseCallback("example", mouse_callback);
    if(cv::waitKey(1) == 'q') break;
  }

  capture.release();
  return 0;
}
