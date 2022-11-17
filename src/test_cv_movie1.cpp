
#include <iostream>
#include <opencv2/opencv.hpp>


int main(int argc, char* argv[])
{
	//std::string path1 = argv[1];

	cv::VideoCapture cap(0);

	cv::Mat mat1;
	cap >> mat1;


	std::string wname = "movie";
	cv::namedWindow(wname, cv::WINDOW_NORMAL);

	while (1) {
		cap >> mat1;

		cv::imshow(wname, mat1);
		int rtn = cv::waitKeyEx(5);

		//double msec1 = cap.get(cv::CAP_PROP_POS_MSEC);
		//if (msec1 > msec1_end)
		//	break;


	}
	return 0;
}

