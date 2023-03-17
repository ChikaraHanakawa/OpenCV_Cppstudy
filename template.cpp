#include <iostream>
#include <vector>
#include <numeric>      // std::iota
#include <algorithm>    // std::sort, std::stable_sort
#include <opencv2/core.hpp>
#include <opencv2/core/utility.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>

cv::Mat templateMatch(cv::Mat src, cv::Mat tmp){

    const int __TARGET_NUM__ = 30;
    cv::Mat output, dst;
    dst = src.clone();
    //テンプレートマッチング
    cv::matchTemplate(src, tmp, output, cv::TM_CCOEFF);
    //0~1の値に標準化
    cv::normalize(output, output, 0, 1, cv::NORM_MINMAX, -1, cv::Mat() );
    //2次元から1次元へ変換
    cv::Mat one_row = output.reshape(1, 1);

    std::vector<float> one_row_vec;
    std::vector<float> one_row_index;

    //cv::Mat -> std::vector に変換
    one_row_vec.assign(one_row.begin<float>(), one_row.end<float>());
    std::vector<int> index(one_row_vec.size());

    //ソートインデックス配列用に整数列を作成する(0,1,2,3,4,5......)
    std::iota(index.begin(), index.end(), 0);

    //ソートをかける
    std::sort(index.begin(), index.end(), [&](int a, int b) {return one_row_vec[a] > one_row_vec[b];});

    for(int i = 0; i < __TARGET_NUM__; i++){        
        //std::cout << index[i] << ":" << one_row_vec[index[i]] << std::endl;
        // 1次元から2次元に変換 
        int x = index[i] % output.cols;
        int y = index[i] / output.cols;
        //std::cout << "(" << x << "," << y << ")" << std::endl;
        //std::cout << "-----------------" << std::endl;
        cv::Rect roi_rect = cv::Rect(x, y, tmp.cols, tmp.rows);
        cv::rectangle(dst, roi_rect, cv::Scalar(0,0,255), 3);
    }

    return dst;
}

int main(int argc, const char* argv[]){

  cv::Mat src = cv::imread("/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/malio.jpeg");
  //テンプレート画像
  cv::Mat kuribo_left = cv::imread("/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/kuribo_right.png");
  cv::Mat kuribo_right = cv::imread("/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/images/kuribo_left.png");
  std::string win_dst = "output";

  cv::Mat dst = templateMatch(src, kuribo_right);
  dst = templateMatch(dst, kuribo_right);

  cv::namedWindow(win_dst, cv::WINDOW_AUTOSIZE);
  cv::imshow(win_dst, dst);
  cv::imwrite("output.png", dst);

  cv::waitKey(0);
  return 0;
}
