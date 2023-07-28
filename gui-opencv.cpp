#include <iostream>
#include <cmath>
#include <opencv2/opencv.hpp>

int main(int argc, char **argv){
  cv::Mat img_src;
  cv::VideoCapture capture(0);
  if(!capture.isOpened()){
    std::cout << "error" << std::endl;
    return 0;
  }
  std::string win_src = "src";
  cv::namedWindow(win_src, cv::WINDOW_AUTOSIZE);
  int num = 1;
  std::string tes = "/home/chikara/c++/opencv-4.7.0/OpenCV_Cppstudy/build/image%d.png", num;

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
    if(key == 'q') break;
  }
  capture.release();
  cv::Mat testPicture = cv::imread(tes, 1);
  cv::imshow("SavePicture", testPicture);
  return 0;
}
