QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CalSource.cpp \
    DataFuncs.cpp \
    central.cpp \
    central2.cpp \
    central_addcars.cpp \
    centraladmin.cpp \
    centraladmin_viewcars.cpp \
    centraladmin_viewclients.cpp \
    deletecarwindow.cpp \
    deleteclientwindow.cpp \
    editcarwindow.cpp \
    editclientwindow.cpp \
    logcommand.cpp \
    login2.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    signup.cpp

HEADERS += \
    CalData.h \
    CarsData.h \
    ClientData.h \
    central.h \
    central2.h \
    central_addcars.h \
    centraladmin.h \
    centraladmin_viewcars.h \
    centraladmin_viewclients.h \
    deletecarwindow.h \
    deleteclientwindow.h \
    editcarwindow.h \
    editclientwindow.h \
    logcommand.h \
    login2.h \
    loginwindow.h \
    mainwindow.h \
    signup.h

FORMS += \
    central.ui \
    central2.ui \
    central_addcars.ui \
    centraladmin.ui \
    centraladmin_viewcars.ui \
    centraladmin_viewclients.ui \
    deletecarwindow.ui \
    deleteclientwindow.ui \
    editcarwindow.ui \
    editclientwindow.ui \
    logcommand.ui \
    login2.ui \
    loginwindow.ui \
    mainwindow.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
