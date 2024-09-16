#include <iostream>
#include <cmath>

using namespace std;

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y + 20, (int)(2 * (x + 20)));
}

int main() {
    float r = 5;// cout << "radius: "; cin >> r;
    float f = 0;// cout << "angle: "; cin >> f;
    cout << endl;

    gotoxy(0, 0); cout << "0";

    for (f = 0; f <= 360; f = f + 1)
    {
        r = 5. + 15. * sin(f / 57.3);
        gotoxy((int)(r * cos(f / 57.3)), (int)(r * sin(f / 57.3))); cout << "x";
    }
    gotoxy(-19, -20);
}