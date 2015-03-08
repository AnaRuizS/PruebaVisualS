// primerdeber.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "opencv2/opencv.hpp"

int _tmain(int argc, _TCHAR* argv[])
{
	int umbral=100;
	char filename[33]="C:/Users/ANA/Pictures/fondo.jpg";

	IplImage* img1 = cvLoadImage(filename,1);
	IplImage* img2 = cvLoadImage(filename,0);
	IplImage* img3 = cvLoadImage(filename,0);
	cvThreshold( img2, img3, umbral,255, CV_THRESH_BINARY);

	cvNamedWindow("Imagen a color",0);
	cvNamedWindow("Imagen escala de grises",0);
	cvNamedWindow("Imagen binaria",0);
	cvShowImage("Imagen a color",img1);
	cvShowImage("Imagen escala de grises",img2);
	cvShowImage("Imagen binaria",img3);

	cvWaitKey();
	cvDestroyAllWindows();
	cvReleaseImage(&img1);
	cvReleaseImage(&img2);
	cvReleaseImage(&img3);
	return 0;
	
}

