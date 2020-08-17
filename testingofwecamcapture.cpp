//sample webcam code

// performance analysis

// compiling command g++ caputerwebcam.cpp -o app `pkg-config --cflags --libs opencv` -ltsanalyser

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <tsanalyser/tsanalyser.h>

int main()
{
    


    cv::VideoCapture cap;
    cap.open("rtsp://192.168.0.6:8080/h264_ulaw.sdp");
    cv::Mat frame;
    while(cap.isOpened())
    {
          
          cap.read(frame);//this is command to read frame from `cap` function
          cv::imshow("ip",frame);
          cv::waitKey(5);//waitkey is opencv command to wait and Input is Integer time is in milliseconds
          
    // peak ram
    getTSAnlaysis(DEBUG_MODE);

    }
    // the camera will be closed automatically upon exit
    cap.release();





    return 0;
}