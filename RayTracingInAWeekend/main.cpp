#include <iostream>

int main()
{
    int nx = 200;
    int ny = 100;
    std::cout << "P3\n" << nx << " " << ny << "\n255\n";

    for (int j = ny - 1; j >= 0; j--) {
        for (int i = 0; i < nx; i++) {
            // rgb value in 0.0 - 1.0
            float r = float(i) / float(nx);
            float g = float(j) / float(ny);
            float b = 0.2;

            // range change from 0 to 255
            int ir = int(255.99 * r);
            int ig = int(255.99 * g);
            int ib = int(255.99 * b);

            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
}
