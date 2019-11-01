# well done!
TARGET=Image
TEMPLATE=lib
CONFIG+=staticlib # make type static (static loaded at exicution, dynamic loaded at run time)
CONFIG+=c++14
SOURCES += src/Image.cpp
OBJECTS_DIR=obj
HEADERS += include/Image.h
INCLUDEPATH += include
LIBS =+ -lOpenImageIO
