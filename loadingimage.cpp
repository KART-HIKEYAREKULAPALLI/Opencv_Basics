//sample loading image from file code

// compiling command g++ loadingimage.cpp -o app `pkg-config --cflags --libs opencv`

#include "opencv2/opencv.hpp"

int main()
{

   cv::Mat image = imread("/home/ubuntu/Pictures/3.png",cv::IMREAD_COLOR);//reading image from file and mode 
   cv::imshow("Displaywindow",image);
   cv::waitKey(0);

    return 0;
}
