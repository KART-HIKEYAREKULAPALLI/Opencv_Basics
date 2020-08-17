
// sample code of storing webcam vedio to file 


// compiling command g++ storingvedio.cpp -o app `pkg-config --cflags --libs opencv`


#include "opencv2/opencv.hpp"

 

int main(){

 

  // Create a VideoCapture object and use camera to capture the video

  cv::VideoCapture cap(0); 



  // Default resolution of the frame is obtained.The default resolution is system dependent. 

  int frame_width = cap.get(CV_CAP_PROP_FRAME_WIDTH); 

  int frame_height = cap.get(CV_CAP_PROP_FRAME_HEIGHT); 

   

  // Define the codec and create VideoWriter object.The output is stored in 'outcpp.avi' file. 

  cv::VideoWriter video("/home/ubuntu/outcpp.avi",CV_FOURCC('M','J','P','G'),10, cv::Size(frame_width,frame_height)); 

  while(1)

  { 

    cv::Mat frame; 

     

    // Capture frame-by-frame 

    cap >> frame;

  

    // If the frame is empty, break immediately

    if (frame.empty())

      break;

     

    // Write the frame into the file 'outcpp.avi'

    video.write(frame);

    

    // Display the resulting frame    

    cv::imshow( "Frame", frame );
    cv::waitKey(5);


  }

 

  // When everything done, release the video capture and write object

  cap.release();

  video.release();

 

  // Closes all the windows

  cv::destroyAllWindows();

  return 0;

}


