#include <iostream>
#include <graphics.h>

using namespace std;

void drawline(int x0, int y0, int x1, int y1) {
	int dx=x1-x0, dy=y1-y0;
	int x=x0, y=y0;
	int p=2*dy-dx;

	while (x < x1) {
		if (p >= 0) {
			putpixel(x, y, GREEN);
			y++;
			p = p+2*dy-2*dx;
		} else {
			putpixel(x, y, GREEN);
			p = p+2*dy;
		}
		x++;
		delay(100);
	}
}

int main() {
	int gdriver=DETECT, gmode;
	initgraph(&gdriver, &gmode, "");

	int x0, y0, x1, y1;
	cout << "Enter co-ordinates of first point: ";
	cin >> x0 >> y0;

	cout << "Enter co-ordinates of second point: ";
	cin >> x1 >> y1;
	drawline(x0, y0, x1, y1);

	getch();

	return 0;
}
