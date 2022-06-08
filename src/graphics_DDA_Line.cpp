#include <iostream>
#include <graphics.h>

using namespace std;

int main() {

	int gd=DETECT, gm;
	initgraph(&gd, &gm, "");

	double x1, y1, x2, y2;
	cout << "Enter the value of x1 and y1: ";
	cin >> x1 >> y1;
	cout << "Enter the value of x2 and y2: ";
	cin >> x2 >> y2;

	/// calculate absolute difference
	double dx, dy;
	dx = abs(x2-x1);
	dy = abs(y2-y1);

	/// count maximum step as well as step/unit per axis
	int step = (dx >= dy) ? dx : dy;
	dx = dx/step, dy = dy/step;
    double x = x1, y = y1;

	for (int i = 0; i <= step; i++) {
        /// increment to next point after putting a red pixel in current one
		putpixel(x, y, RED);
		x = x+dx;
		y = y+dy;
		delay(100); /// delay in ms
	}

	return 0;
}
