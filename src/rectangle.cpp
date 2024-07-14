#include <opencv2/opencv.hpp>

int main()
{

    cv::Mat img, dst;

    img = cv::imread("../data/test2.jpg");
    dst = img.clone();

    cv::rectangle(dst, cv::Point(0, 295), cv::Point(180, 430), cv::Scalar(255, 0, 0), 5);

    cv::imshow("input", img);
    cv::imshow("output", dst);

    cv::waitKey(0);

    return 0;
}