#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat img, dst;

    img = cv::imread("../data/test.png");
    dst = cv::Mat(img, cv::Rect(60, 0, 200, 140));

    cv::imshow("input", img);
    cv::imshow("output", dst);
    cv::waitKey(0);

    return 0;
}