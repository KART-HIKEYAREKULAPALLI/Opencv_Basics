# Opencv_Basics
OpenCV Codes for various tasks

# OPenCV Installation
I personally use Ubuntu 16.04 64 bit x86, Hence all these steps are tried and tested on my system, I would suggest you to mirror my configuration for smoother experience with the course.
Most online resources say to compile OpenCV 3 on Ubuntu, But since I am lazy I found out an ppa for OpenCV 3, ppa looks good, I just hope that it does not come back and bite me in my ass later.
Here are the steps for installing openCV 3 on Ubuntu 16.04
```
sudo add-apt-repository ppa:lkoppel/opencv
sudo apt-get update
sudo apt install libopencv-calib3d3.2 libopencv-core3.2 libopencv-features2d3.2  libopencv-flann3.2 libopencv-highgui3.2 libopencv-imgcodecs3.2 libopencv-imgproc3.2 libopencv-ml3.2 libopencv-objdetect3.2 libopencv-photo3.2 libopencv-shape3.2 libopencv-stitching3.2 libopencv-superres3.2 libopencv-video3.2 libopencv-videoio3.2 libopencv-videostab3.2 libopencv-viz3.2 libopencv3.2-jni libopencv3.2-java libopencv-contrib3.2 

sudo apt install libopencv-calib3d-dev libopencv-core-dev libopencv-features2d-dev  libopencv-flann-dev libopencv-highgui-dev libopencv-imgcodecs-dev libopencv-imgproc-dev libopencv-ml-dev libopencv-objdetect-dev libopencv-photo-dev libopencv-shape-dev libopencv-stitching-dev libopencv-superres-dev libopencv-video-dev libopencv-videoio-dev libopencv-videostab-dev libopencv-viz-dev libopencv-contrib-dev libopencv-dev
```
