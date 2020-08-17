//sample manipulating image or vedio frame  code

// compiling command g++ manipulatingframes.cpp -o app `pkg-config --cflags --libs opencv`

#include "opencv2/opencv.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <vector>
// function to rotate image by angle


cv::Mat rotate(cv::Mat src, double angle)   //rotate function returning mat object with parametres imagefile and angle    
{
    cv::Mat dst;      //Mat object for output image file
    cv::Point2f pt(src.cols/2.0,src.rows/2.0);          //point from where to rotate    
    cv::Mat r = getRotationMatrix2D(pt, angle, 1.0);      //Mat object for storing after rotation
    cv::warpAffine(src, dst, r, cv::Size(src.cols, src.rows));  ///applie an affine transforation to image.
    return dst;         //returning Mat object for output image file
}

int main()
{
   /* Opencv imread API

        syntax : imread(filepath,flag)
        Input parameters : filepath is image path
                           flag is manipulating of image colour : 	cv::IMREAD_UNCHANGED = -1,
  								  	cv::IMREAD_GRAYSCALE = 0,
  								  	cv::IMREAD_COLOR = 1,
  									cv::IMREAD_ANYDEPTH = 2,
  									cv::IMREAD_ANYCOLOR = 4,
  									cv::IMREAD_LOAD_GDAL = 8,
  									cv::IMREAD_REDUCED_GRAYSCALE_2 = 16,
  									cv::IMREAD_REDUCED_COLOR_2 = 17,
									cv::IMREAD_REDUCED_GRAYSCALE_4 = 32,
									cv::IMREAD_REDUCED_COLOR_4 = 33,
									cv::IMREAD_REDUCED_GRAYSCALE_8 = 64,
									cv::IMREAD_REDUCED_COLOR_8 = 65,
									cv::IMREAD_IGNORE_ORIENTATION = 128
   */
   cv::Mat image = imread("/home/ubuntu/Pictures/3.png",cv::IMREAD_COLOR);
   cv::imshow("Original Image",image);
   cv::Mat dst;      //Mat object for output image file
   //dst = rotate(image, 30);       
   cv::resize(rotate(image,30), dst, cv::Size(300, 300));//rotating image with 30 degree angle and resizing It.
   cv::imshow("Original Image",image);
   cv::imshow("Rotated resized Image",dst);
   cv::waitKey(0);
   

    return 0;
}
