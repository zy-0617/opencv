#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
    Mat srcImage = imread("../7.jpg");
    Mat tmpImage, dstImage1, dstImage2;
    tmpImage=srcImage;

    imshow("【原始图】", srcImage);

    resize(tmpImage,dstImage1,Size(tmpImage.cols / 2, tmpImage.rows / 2), 0, 0, 3);
    resize(tmpImage,dstImage2,Size(tmpImage.cols * 2, tmpImage.rows * 2), 0, 0, 3);

    imshow("【效果图】1", dstImage1);
    imshow("【效果图】2", dstImage2);

    waitKey(0);
    return 0;
}

