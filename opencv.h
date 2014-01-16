#include "opencv2/core/core_c.h"
#include "opencv2/core/core.hpp"
#include "opencv2/flann/miniflann.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/video/video.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/ml/ml.hpp"
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/contrib/contrib.hpp"
#include <iostream>


using namespace std;
using namespace cv;

int videoDisplay(){
        VideoCapture cap(CV_CAP_OPENNI);
        if(!cap.isOpened()) return -1;
        Mat frame;
        namedWindow("video",1);
        for(;;){
                cap.grab();
                cap.retrieve(frame, CV_CAP_OPENNI_DEPTH_MAP);
                //cap>>frame;
                imshow("video",frame);
                if(waitKey(30)>=0)break;

        }
        return 0;
}
