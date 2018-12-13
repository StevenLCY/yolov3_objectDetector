#ifndef YOLOV3DETECTOR_H
#define YOLOV3DETECTOR_H

#include <QMainWindow>


namespace Ui {
class yolov3Detector;
}

class yolov3Detector : public QMainWindow
{
    Q_OBJECT

public:
    explicit yolov3Detector(QWidget *parent = nullptr);
    ~yolov3Detector();

private slots:
    void on_actionOpen_triggered();

private:
    Ui::yolov3Detector *ui;
};

#endif // YOLOV3DETECTOR_H
