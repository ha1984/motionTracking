#include <opencv2\highgui\highgui.hpp>

int main()
{
	cvNamedWindow("Video", CV_WINDOW_AUTOSIZE);
	CvCapture* capture = cvCreateCameraCapture(0);
	IplImage* frame;
	while (1) {
		frame = cvQueryFrame(capture);
		if (!frame) break;
		cvShowImage("Video", frame);
		char c = cvWaitKey(33);
		if (c == 27) break;
	}
	cvReleaseCapture(&capture);
	cvDestroyWindow("Video");
	return 0;
}