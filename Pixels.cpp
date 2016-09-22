#include "Pixels.h"

void Pixels::putPixel(int x, int y, int r, int g, int b) {
	pixis.setColor(x, y, (r, g, b)); // Inicialización del putpixel

}

void Pixels::getPixel() {
	tex.loadData(pixis);

}

void Pixels::init() {
	pixis.allocate(1024, 768, OF_PIXELS_RGB);
	tex.allocate(1024, 768, GL_RGB); // Canvas


}

void Pixels::draw() {
	tex.draw(0, 0);
}