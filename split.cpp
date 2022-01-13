#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
using namespace cv;
using namespace std;

uint8_t enemy_color=1;
int main()
{
    Mat src=imread("../8.jpeg");
    std::vector<cv::Mat> channels;
    cv::Mat color_channel;
    cv::split(src, channels);
    /*if (enemy_color == 0) {
        color_channel = channels[0];
    } else if (enemy_color == 1) {
        color_channel = channels[2];
    }*/
    color_channel = channels[2];
    int light_threshold=220;
    /*if(enemy_color == 0){
        light_threshold = 220;
    }else{
        light_threshold = 200;
    }*/

    cv::threshold(color_channel,color_channel,light_threshold, 255,cv::THRESH_BINARY); // 二值化对应通道

    cv::imshow("picture",color_channel);
    cv::waitKey(0);
}





