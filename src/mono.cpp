#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat img;
    img = cv::imread("../data/test.png");

    cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);

    cv::imshow("title", img);
    cv::waitKey(0);

    return 0;
}