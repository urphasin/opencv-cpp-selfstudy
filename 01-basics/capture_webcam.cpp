#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
  std::cout << "Checking for available video capture devices...\n";

  // for (int i = 0; i < 10; ++i) { // Check first 10 devices indices
  //   cv::VideoCapture cap(i);
  //   if (cap.isOpened() == true) {
  //     std::cout << "\033[33mDevice found at index: " << i << "\033[0m" << std::endl;
  //     cap.release(); // Always release!
  //   }
  // }

    // Open the default camera (0)
  cv::VideoCapture cap(2);
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