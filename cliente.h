#ifndef CLIENTE_H
#define CLIENTE_H

#include <QObject>
#include <QTcpSocket>
#include <QCamera>
#include <QMovie>
#include <QTimer>
#include <QTime>
#include <QPixmap>
#include <QBuffer>
#include <QPainter>
#include <opencv2/opencv.hpp>
#include "cvmatandqimage.h"
#include "capturebuffer.h"

#define PROTOCOL "VVG"
#define PROTOCOL_VERSION "0.1"


typedef std::vector<cv::Mat> ImagesType;
typedef std::vector<std::vector<cv::Point> > ContoursType;


class cliente : public QObject
{
    Q_OBJECT
private:
    QList<QByteArray> devices_;
    int selectedDevice_;
    CaptureBuffer *captureBuffer_;
    QMovie *movie_;
    QCamera *camera_;

    QTimer *timer_;
    const int TIMEOUT_TIMER;
    QTcpSocket *socket_;
    QString hostAdress_;
    bool mode_;
    qint16 port_;

    cv::BackgroundSubtractorMOG2 *backgroundSubtractor;
    cv::Mat foregroundMask;
    QVector<QRect> VRect;

    void startStream(const QImage &image2);

public:
    explicit cliente(QObject *parent = 0);
    ~cliente();


signals:


public slots:
        void movie_updated(const QRect& rect);
        void image_s(const QImage &image);
        void ConnectToHost();
        void StreamVideo();

};

#endif // CLIENTE_H
