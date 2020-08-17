//sample http webcam code

// first install gstreamer to compile this code link :https://gstreamer.freedesktop.org/documentation/installing/on-linux.html?gi-language=c
//sudo apt-get update -y
// sudo apt-get install -y libgstreamermm-1.0-1



// compiling command g++ caputerwebcam.cpp -o app `pkg-config --cflags --libs opencv` `pkg-config --cflags gstreamer-1.0` 

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

int main()
{
    


    cv::VideoCapture cap("http://192.168.0.7:8080/video");
    cv::Mat frame;
    cv::Mat dst;
    while(cap.isOpened())
    {
          
          cap.read(frame);//this is command to read frame from `cap` function
          cv::resize(frame,dst, cv::Size(500, 500));
	  cv::imshow("ip",dst);
          cv::waitKey(3);//waitkey is opencv command to wait and Input is Integer time is in milliseconds
    }
    // the camera will be closed automatically upon exit
    cap.release();

    return 0;
}