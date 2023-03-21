#include <iostream>
#include <opencv2/opencv.hpp>

int save_x, save_y;
std::string file_src = "/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/waifu.png";

void mouse_callback(int event, int x, int y, int flags, void *userdata){
  if (event == cv::EVENT_LBUTTONUP){
      std::cout << "Left mouse button is pressed." << std::endl;
      std::cout << x << "," << y << std::endl;
  }
}

int main(){
  cv::Mat img_src = cv::imread(file_src, 1);
  cv::imshow("example", img_src);
  cv::setMouseCallback("example", mouse_callback);
  cv::waitKey(0);
  
  return 0;
}
