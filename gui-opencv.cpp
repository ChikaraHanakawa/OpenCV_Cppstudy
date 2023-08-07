#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <opencv2/opencv.hpp>

int main(int argc, char **argv){
  cv::Mat img_src;
  cv::VideoCapture capture(0);
  if(!capture.isOpened()){
    std::cout << "error" << std::endl;
    return 0;
  }
  std::string win_src = "Video";
  cv::namedWindow(win_src, cv::WINDOW_AUTOSIZE);
  int num = 1;

  while(1){
    capture >> img_src;
    cv::imshow(win_src, img_src);
    int key = cv::waitKey(1);
    if(key == 's'){
      std::stringstream ss;
      ss << "image" << num << ".png";
      cv::imwrite(ss.str(), img_src);
      num++;
    }
    if(key == 'e'){
      static int i = 0;
      std::ostringstream oss;
      oss << std::setfill('0') << std::setw(3) << i++;
      cv::Mat image = cv::imread( "/home/chikara/c++/opencv-4.7.0/OpenCV_Cppstudy/build/image" + oss.str() + ".png" );
      if(image.empty()){
        break;
      }
      cv::imshow("Capture-image", image);
    }
    if(key == 'q') break;
  }
  capture.release();
  return 0;
}
