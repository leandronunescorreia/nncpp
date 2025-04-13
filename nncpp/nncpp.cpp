#include <iostream>
#include <opencv2/opencv.hpp>

#include <Eigen/Dense>


int main() {
   std::cout << "First compilation!\n";
   std::cout << "OpenCV version is " << CV_VERSION << std::endl;

   Eigen::MatrixXd m(2, 2);
   m(0, 0) = 3;
   m(1, 0) = 2.5;
   m(0, 1) = -1;
   m(1, 1) = m(1, 0) + m(0, 1);
   std::cout << m << std::endl;

   cv::Mat mat(2, 2, CV_64F); // Corrigido para usar o namespace cv corretamente
}