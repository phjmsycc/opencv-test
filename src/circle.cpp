#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat img, dst;

    img = cv::imread("../data/test2.jpg");
    dst = img.clone();

    cv::circle(dst, cv::Point(95, 355), 95, cv::Scalar(255, 0, 0), 5);

    cv::imshow("input", img);
    cv::imshow("output", dst);

    cv::imwrite("output_img.jpg", img);
    cv::imwrite("output_dst.jpg", dst);

    cv::waitKey(0);

    return 0;
}