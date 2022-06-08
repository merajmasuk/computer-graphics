#include <iostream>
#include <graphics.h>
using namespace std;

void midPointCircleDraw(int x_centre, int y_centre, int r) {

    int x = r, y = 0;
    putpixel(x+x_centre, y+y_centre, WHITE);
    if (r > 0) {
        putpixel( x+x_centre,-y+y_centre, WHITE);
        putpixel( y+x_centre, x+y_centre, WHITE);
        putpixel(-y+x_centre, x+y_centre, WHITE);
    }

    int P = 1-r;
    while (x > y) {
        y++;

        if (P <= 0) {
            P = P + 2*y + 1;
        } else {
            x--;
            P = P + 2*y - 2*x + 1;
        }

        if (x < y) {
            break;
        }

        putpixel( x+x_centre, y+y_centre, WHITE);
        putpixel(-x+x_centre, y+y_centre, WHITE);
        putpixel( x+x_centre,-y+y_centre, WHITE);
        putpixel(-x+x_centre,-y+y_centre, WHITE);

        if (x != y) {
            putpixel( y+x_centre, x+y_centre, WHITE);
            putpixel(-y+x_centre, x+y_centre, WHITE);
            putpixel( y+x_centre,-x+y_centre, WHITE);
            putpixel(-y+x_centre,-x+y_centre, WHITE);
        }
        delay(50);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    midPointCircleDraw(200, 200, 100);
    return 0;
}
