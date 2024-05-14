#include "ImgPreProcessor.h"
#include "opencv2/imgproc.hpp"

ImgPreProcessor::ImgPreProcessor(std::string fileName)
{
	imagePath = fileName;
}

ImgPreProcessor::~ImgPreProcessor()
{
}

cv::Mat ImgPreProcessor::processImage()
{
	// Recibir un archivo de imagen y prepararla para detectar lineas en ella
	// Devuelve -1 o null si no se ha encontrado la imagen, y el material procesado si se ha encontrado y procesado correctamente
	// Se puede cambiar este metodo como se vea conveniente

	// Loads an image
	// Hacer un try catch para manejar excepciones si no encuentra la imagen
	source = imread(samples::findFile(imagePath), IMREAD_GRAYSCALE);
	// Check if image is loaded fine
	
	if (source.empty()) {
		
		// Comunicar que no se ha encontrado la imagen

		// return null???;
	}

	// Edge detection
	Canny(source, destino, 50, 200, 3);
	// Copy edges to the images that will display the results in BGR
	cvtColor(destino, cdst, COLOR_GRAY2BGR);
	cdstP = cdst.clone();

	return cdst;
}