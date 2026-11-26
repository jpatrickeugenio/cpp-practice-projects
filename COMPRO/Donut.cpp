
#include <iostream>
#include <cmath>
#include <cstring>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    const int width = 80;
    const int height = 24;

    float A = 0;
    float B = 0;

    const float PI = 3.14159f;

    cout << "\x1b[2J";

    while (true) {
        char screen[width * height];
        float zbuffer[width * height];

        memset(screen, ' ', sizeof(screen));
        memset(zbuffer, 0, sizeof(zbuffer));

        for (float theta = 0; theta < 2 * PI; theta += 0.07f) {
            for (float phi = 0; phi < 2 * PI; phi += 0.02f) {

                float sinA = sin(A), cosA = cos(A);
                float sinB = sin(B), cosB = cos(B);
                float sintheta = sin(theta), costheta = cos(theta);
                float sinphi = sin(phi), cosphi = cos(phi);

                float circleX = 2 + costheta;
                float circleY = sintheta;

                float x = circleX * (cosB * cosphi + sinA * sinB * sinphi)
                          - circleY * cosA * sinB;

                float y = circleX * (sinB * cosphi - sinA * cosB * sinphi)
                          + circleY * cosA * cosB;

                float z = 5 + cosA * circleX * sinphi
                          + circleY * sinA;

                float ooz = 1 / z;

                int xp = width / 2 + 30 * ooz * x;
                int yp = height / 2 - 15 * ooz * y;

                float L = cosphi * costheta * sinB
                          - cosA * costheta * sinphi
                          - sinA * sintheta
                          + cosB * (cosA * sintheta
                          - costheta * sinA * sinphi);

                int index = xp + width * yp;

                if (index >= 0 && index < width * height && L > 0) {
                    if (ooz > zbuffer[index]) {
                        zbuffer[index] = ooz;

                        int luminance = L * 8;
                        const char* shades = ".,-~:;=!*#$@";
                        screen[index] = shades[luminance > 11 ? 11 : luminance];
                    }
                }
            }
        }

        cout << "\x1b[H";

        for (int i = 0; i < width * height; i++) {
            cout << screen[i];
            if (i % width == width - 1) {
                cout << '\n';
            }
        }

        A += 0.04f;
        B += 0.02f;

        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(30));
    }

    return 0;
}
