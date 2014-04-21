#ifndef PROCESSIMAGE_H
#define PROCESSIMAGE_H

#include <QtGui>
#include "facedetect.h"
#include <QtDebug>


class ProcessImage : public QWidget
{
    Q_OBJECT
public:
    ProcessImage(QWidget *parent=0);
    ~ProcessImage();
    facedetect *fac;
private:
    QPainter *painter;
    QLabel *label;
    QImage frame;
    QTimer *timer;
    Mat pic;

    int convert_yuv_to_rgb_pixel(int y, int u, int v);
    int convert_yuv_to_rgb_buffer(unsigned char *yuv, unsigned char *rgb, unsigned int width, unsigned int height);
    QImage mat2qimage(const Mat& mat);


private slots:
//    void flush_video();
    void paintEvent(QPaintEvent *) ;
    void display_error(QString err);


};

#endif
