TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11
CONFIG += W
CONFIG += Wall
CONFIG += pedantic

SOURCES += main.%CppSourceSuffix%

include(deployment.pri)
qtcAddDeployment()

DISTFILES += \
    input \
    output
