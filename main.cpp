#include <iostream>
#include <iomanip>

int main() {

    std::cout << "--------------------------------" << std::endl;
    std::cout << "----Cuboid volume calculator----" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    std::cout << "Enter width, height and depth:";

    float sizes[3];



    int inputs = 0;

    while(inputs < 3) {
        std::cin >> sizes[inputs];
        inputs ++;
    }

    std::cout << "Width: " << sizes[0] << std::endl;
    std::cout << "Height: " << sizes[1] << std::endl;
    std::cout << "Depth: " << sizes[2] << std::endl;
    std::cout << std::endl;

    std::cout << std::setprecision(3) << std::fixed;
    float volume = sizes[0] * sizes[1] * sizes[2];
    std::cout << "Volume: " << volume << std::endl;
    float area = 2 * (sizes[0] * sizes[1]) + 2 * (sizes[1] * sizes[2]) + 2 * (sizes[0] * sizes[2]);
    std::cout << "Surface Area: " << area << std::endl;





    return 0;
}
