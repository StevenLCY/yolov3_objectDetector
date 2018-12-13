#include "yolov3detector.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    yolov3Detector w;
    w.show();

    return a.exec();
}
