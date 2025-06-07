#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
  cv::Mat img = cv::imread("resources/sample.jpg");
  if (img.empty()) {
    std::cout << "Image not found!\n";
    return -1;
  }

  cv::imshow("Display Image", img);
  cv::waitKey(0);
  return 0;
}