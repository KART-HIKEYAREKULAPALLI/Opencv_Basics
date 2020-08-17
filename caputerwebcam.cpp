//sample webcam code


// first install gstreamer to compile this code link :https://gstreamer.freedesktop.org/documentation/installing/on-linux.html?gi-language=c
//sudo apt-get update -y
// sudo apt-get install -y libgstreamermm-1.0-1


// compiling command g++ caputerwebcam.cpp -o app `pkg-config --cflags --libs opencv` 

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

int main()
{
    


    cv::VideoCapture cap;
    // use cap(0) for webcam streaming
    cap.open("rtsp://192.168.0.7:8080/h264_ulaw.sdp");
    cv::Mat frame;
    while(cap.isOpened())
    {
          
          cap.read(frame);//this is command to read frame from `cap` function
          cv::imshow("ip",frame);
          cv::waitKey(5);//waitkey is opencv command to wait and Input is Integer time is in milliseconds


    }
    // the camera will be closed automatically upon exit
    cap.release();

    return 0;
}
