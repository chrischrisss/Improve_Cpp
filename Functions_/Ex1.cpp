#include <iostream>

namespace example {
    float square(float height, float weight) {
        float area = height * weight;
        return area;
    }
}


float triangle(float width, float height); // forward delcaration of a function


int main() {
    
    float area = triangle(2.5, 4);
    float square_area = example::square(2, 2);
    std::cout << area << std::endl;
    std::cout << square_area << std::endl;
    
    return 0;
}

float triangle(float width, float height) {
    float area;
    
    area = (width * height) / 2.0;
    return area;
}
