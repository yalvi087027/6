#include <graphics.h>

const int steps = 4;

void fractal_print(int x, int y, int side, int step)
{
    if (step > steps) return;

    rectangle(x - side / 2,y - side / 2,x + side / 2, y + side / 2);

    fractal_print(x - side / 2, y - side / 2, side / 2, step + 1);
    fractal_print(x + side / 2, y - side / 2, side / 2, step + 1);
    fractal_print(x - side / 2, y + side / 2, side / 2, step + 1);
    fractal_print(x + side / 2, y + side / 2, side / 2, step + 1);
}

int main()
{
    int gd = CUSTOM;
    int gm = CUSTOM_MODE(512, 512);
    initgraph(&gd, &gm," ");

    int side = 256;

    fractal_print(256, 256, side, 1);

    readkey();
    closegraph();
    return 0;
}
