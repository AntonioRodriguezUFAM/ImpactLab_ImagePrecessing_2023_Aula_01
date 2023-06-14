#include "Image.h"
// REF: https://www.youtube.com/playlist?list=PLG5M8QIx5lkzdGkdYQeeCK__As6sI2tOY


int main(int argc, char** argv) {
	Image image_01("Images/apple.jpg");
	image_01.grayscale_avg();
	image_01.write("Images/apple_out1.jpg");
	//image_01.~Image();

	/*

		Add your own code here to do some cool stuff with images!
		

	*/




	return 0;
}