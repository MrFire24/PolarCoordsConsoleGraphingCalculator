#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

#pragma region Settings

#define RADIANS_MODE true

#define MAX_ANGLE 2 * M_PI * 3  // 360 * 3
#define STEP_SIZE M_PI / 90    // 2.0
#define SIZE_X 50
#define SIZE_Y 30

#pragma endregion


#define goto(x,y) printf("%c[%d;%df", 0x1B, y, (int)x)

float r, f;

void put(float, float, char);
void draw();

// Main Graphing Calculator Function
// r - radius
// f - angle
// 'o' is a center
void func() {
    r = 5. + 13. * sin(f);
    //r = 5;
    //r = f

    //r = 5 + rand() % 10;
    
    /*
    static float rnd = 12.0;
    rnd += (rand() % 100 - 50.0) / 80. + (12.0 - rnd) / 250.;
    r = rnd;
    */
}

int main() {
    draw();
    cin.ignore();
}



void put(float x, float y, char symbol) {
    goto((int)(2. * (x + SIZE_X / 2.)), (int)(y + SIZE_Y / 2.));
    cout << symbol;
}

void draw() {
    for (f = 0; f <= MAX_ANGLE; f = f + STEP_SIZE) {
        func();
        put((r * cos(f / (RADIANS_MODE ? 1 : 57.3))), (r * sin(f / (RADIANS_MODE ? 1 : 57.3))), 'x');
    }

    put(0, 0, 'o');
    goto(0, SIZE_Y);
}