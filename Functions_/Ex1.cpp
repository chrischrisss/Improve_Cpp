#include <iostream>

float triangle(float width, float height) {
    float area;
    
    area = (width * height) / 2.0;
    return area;
}

int main() {

    float area = triangle(2.5, 4);
    std::cout << area << std::endl;

    return 0;
}
