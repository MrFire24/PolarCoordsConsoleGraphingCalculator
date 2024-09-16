#include <iostream>
#include <cmath>

using namespace std;

#define SIZE_X 30
#define SIZE_Y 30

#define goto(x,y) printf("%c[%d;%df", 0x1B, y, (int)x)

void put(float x, float y, char symbol) {
    goto((int)(2. * (x + SIZE_X / 2.)), (int)(y + SIZE_Y / 2.));
    cout << symbol;
}

int main() {
    float r = 5;// cout << "radius: "; cin >> r;
    float f = 0;// cout << "angle: "; cin >> f;
    cout << endl;

    put(0, 0, '0');

    for (f = 0; f <= 360; f = f + 1)
    {
        r = 5. + 15. * sin(f / 57.3);
        put((r * cos(f / 57.3)), (r * sin(f / 57.3)), 'x');
    }
    goto(0, SIZE_Y);
    cin.ignore();
}