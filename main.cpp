#include <QtGui>
#include "processImage.h"
#include "facedetect.h"


int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    ProcessImage process;
    process.resize(640,480);
    process.show();

    return app.exec();
}
