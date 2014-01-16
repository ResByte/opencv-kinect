cmake_minimum_required(VERSION 2.8)
PROJECT( openni_wrapper )
FIND_PACKAGE(OpenCV REQUIRED)
ADD_EXECUTABLE( video main.cpp )
TARGET_LINK_LIBRARIES(video ${OpenCV_LIBS})

