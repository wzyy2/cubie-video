#ifndef FACEDETECT_H
#define FACEDETECT_H
//for qt
#include <QtGui>
#include <QDebug>

#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <iostream>
#include <string>
using namespace std;
using namespace cv;




class facedetect
{
public:
    facedetect();
    ~facedetect();
    void detectAndDraw( Mat& img, CascadeClassifier& cascade,
                        CascadeClassifier& nestedCascade,
                        double scale, bool tryflip );
    void catchface( Mat *);

    CascadeClassifier cascade, nestedCascade;
    VideoCapture *cam;    //打开默认摄像头
};

#endif // FACEDETECT_H
