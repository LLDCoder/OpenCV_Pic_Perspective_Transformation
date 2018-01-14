#pragma once
#ifndef __NEW_WINDOWS_H__
#define __NEW_WINDOWS_H__

#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc/imgproc_c.h>  
#include <Windows.h>
#include <iostream>  
#include <vector>  

#define FALSE 0
#define TRUE 1

using namespace std;
using namespace cv;

class NewWindow
{
public:
	vector<Point2f> imagePoints;
	void CreateWindows();
	void mouse_callback(int event, int x, int y, int flags, void* param);
	NewWindow(char* label, char* pic_name);

private:
	double mx = 0, my = 0;
	int dx = 0, dy = 0, horizBar_x = 0, vertiBar_y = 0;
	bool clickVertiBar = false, clickHorizBar = false, needScroll = false;
	CvRect rect_bar_horiz, rect_bar_verti;
	IplImage* image;

	Point  p;
	Point pp;
	int flag = 0;
	int x_offset;
	int y_offset;
	char* pic_name;
	char* label;


	void myShowImageScroll(char* title, IplImage* src_img,
		int winWidth = 1400, int winHeight = 700); // 显示窗口大小默认为 1400×700  

};


#endif