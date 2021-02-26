#ifndef SLIDERWIDGET_H
#define SLIDERWIDGET_H

#include <QWidget>
#include <QDialog>
#include <QHBoxLayout>
#include <QSlider>
#include <QEvent>
#include <QMouseEvent>
#include <QEvent>
#include <QFocusEvent>

#include "slider.h"

class SliderWidget : public QDialog
{
    Q_OBJECT
public:
    explicit SliderWidget(QWidget *parent = nullptr);
//    QDialog *vSliderDialog;
    QHBoxLayout *HLayout;
    QSlider *vSlider;

private:
    void initUi();

    int volunmPosX;
    int volunmPosY;
    int volunmPosWidth;
    int volunmPosHeight;
protected:
    bool eventFilter(QObject *obj, QEvent *event)override;   //鼠标滑块点击  事件过滤器
    bool nativeEvent(const QByteArray &eventType, void *message, long *result)override;
public:
    void changeVolumePos(int posX, int posY, int width, int height);
};

#endif // SLIDERWIDGET_H
