#-------------------------------------------------
#
# Project created by QtCreator 2014-04-08T12:11:10
#
#-------------------------------------------------

QT       += core
QT       += network
QT       += multimedia multimediawidgets
QT       += gui

TARGET = VVG-cliente-1314-g03
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    mysignalhandler.cpp \
    cliente.cpp \
    capturebuffer.cpp

include(QtOpenCV.pri)
add_opencv_modules(core video imgproc)

HEADERS += \
    mysignalhandler.h \
    cliente.h \
    capturebuffer.h \
    cvmatandqimage.h

PROTOS = protocol.proto
include(protobuf.pri)

