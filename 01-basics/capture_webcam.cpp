#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
  // Open the default camera (0)
  cv::VideoCapture cap(0);
  if (cap.isOpened() == false) {
    std::cerr << "Error: Cannot open the webcam" << std::endl;
    return -1;
  }

  cv::Mat frame;
  while (true) {
    cap >> frame; // Capture a new frame from the webcam
    if (frame.empty() == true) {
      std::cerr << "Error: Blank frame grabbed" << std::endl;
      break;
    }

    cv::imshow("Webcam Feed", frame); // Show the frame

    // Press ESC to exit
    if (cv::waitKey(1) == 27) {
      break;
    }
  }

  cap.release();
  cv::destroyAllWindows();
  return 0;
}