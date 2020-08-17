
//sample Playing vedio code

// compiling command g++ playingvideo.cpp -o test `pkg-config --cflags --libs opencv`

#include "opencv2/opencv.hpp"

int main()
{
    std::string path="/home/ubuntu/Desktop/test.mp4";
    cv::VideoCapture cap(path);//opening test.mp4
    while(1)
    {
          cv::Mat frame;
          cap >> frame;// Capture frame-by-frame
          cv::imshow("Displaywindow",frame);
          cv::waitKey(20);//waitkey is opencv command to wait and Input is Integer time is in milliseconds


    }
    // the camera will be closed automatically upon exit
    cap.release();

    return 0;
}
