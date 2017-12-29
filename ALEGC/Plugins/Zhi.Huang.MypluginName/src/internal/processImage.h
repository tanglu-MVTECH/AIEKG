#ifndef PROCESSIMAGE_H
#define PROCESSIMAGE_H
#include "readdata.h"
#include <fstream>
#include <opencv2/ml/ml.hpp>

class ReadData;

class ImageProcess : public ReadData
{
	Q_OBJECT
public:
	ImageProcess();
	Mat asRowMatrix( vector<Mat>& src, int rtype, double alpha , double beta );
	void doPCA( ReadData *pst);
	void trainSVMs( ReadData *pst);
	void testSVMs( ReadData *pst);
	int predictSVMs(ReadData *pst,QString getDataName,Mat realMat);
	void beginTransmission(ReadData *pst,QString getDataName);
	int num_components;
	
private:
	Mat	pcaData;
	Mat pcaDstMat;
	Mat pcaDst;
	//int matSize;
	
	Mat trainingData;
	vector<int> trainingLabels;
	vector<int> testLabels;
	Mat trainingClasses;
	Mat pcaTestData;
	Mat pcaTestDstMat;
	Mat pcaTestDst;
	CvSVM SVM;
	int result;
	int right ;
	Mat realpredictData;
	Mat realpredictDstMat;
	Mat realpredictDst;

		
	
};



#endif