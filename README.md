# OpenCV C++ Self-Study
A structured approach to mastering OpenCV with C++.


## 📌 What Each Part Does

- **01-basics/**: Load images, draw, read webcam – absolute fundamentals.
- **02-image-processing/**: Filters, edge detection, basic transformations.
- **03-object-detection/**: Use contours, Haar cascades, motion tracking.
- **04-deep-learning/**: Run pre-trained models with OpenCV DNN module.
- **05-projects/**: Real-world applications combining everything you've learned.
- **include/**: Put reusable utility headers (e.g., helper functions).
- **resources/**: Store images, videos, and model files.


## 🔍 What You Can Do with OpenCV in C++

### 📷 Image Processing
- Filters (blur, sharpen)
- Thresholding
- Contour detection

### 🧠 AI & Deep Learning
- Load models (`.onnx`, `.pb`, `.caffemodel`)
- Run inference with DNN module
- Face detection (Haar cascades, DNNs)

### 🤖 Real-Time Applications
- Object tracking
- Gesture recognition
- Motion detection with webcam/video

### 🧰 Utilities
- Drawing shapes
- Accessing camera (`cv::VideoCapture`)
- Saving and transforming images

---

## 🔗 Resources to Learn

- 📘 **OpenCV C++ Tutorials** – [docs.opencv.org](https://docs.opencv.org/)
- 🧑‍💻 **Book**: *Learning OpenCV 4* by Adrian Kaehler & Gary Bradski
- 🛠️ **Practice Ideas**:
  - Detect faces using Haar cascades or DNN
  - Track moving objects
  - Build a real-time filter like Snapchat

---

### 🧠 Tip
If you're already learning C++ for neural networks or robotics, OpenCV pairs beautifully with:
- Embedded systems (e.g. Raspberry Pi, Jetson Nano)
- Arduino-compatible cameras
- Deep learning frameworks like TensorFlow via `.onnx` models in C++


## 🛠️ Getting Started with OpenCV in C++

### 🔹 1. Install OpenCV (Linux)

```bash
sudo apt update
sudo apt install libopencv-dev
```
###  🔹 2. To compile a simple OpenCV C++ program:

```bash
g++ main.cpp -o app `pkg-config --cflags --libs opencv4`
```
