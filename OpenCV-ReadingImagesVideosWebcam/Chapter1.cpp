#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// For displaying images \\

//void main()
//{
//	string path = "Resources/test.png";
//	Mat img = imread(path);
//	imshow("Image", img);
//	waitKey(0);
//}

//For displaying videos\\

//void main()
//{
//	string path = "Resources/test_video.mp4";
//	VideoCapture cap(path);
//	Mat img;
//	
//	while (true)
//	{
//		cap.read(img);
//		imshow("Video", img);
//		waitKey(1);
//	}
	
void main()
{
	VideoCapture cap(0);
	Mat img;

	while (true)
	{
		cap.read(img);
		imshow("Webcam", img);
		waitKey(1);
	}
}


