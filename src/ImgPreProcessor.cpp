#include "ImgPreProcessor.h"
#include "checkML.h"

ImgPreProcessor::ImgPreProcessor(std::string fileName)
{
	imagePath = fileName;
}

ImgPreProcessor::ImgPreProcessor(const Mat& image)
{
	source = image;
}

ImgPreProcessor::ImgPreProcessor()
{
}

ImgPreProcessor::~ImgPreProcessor()
{
}


