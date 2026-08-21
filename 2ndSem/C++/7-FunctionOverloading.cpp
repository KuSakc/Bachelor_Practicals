int area(int length, int breadth) {
    return length * breadth;
}

int area(int length) {
    return length * length;
}


int main() {
    int area_rectangle, area_square, length, breadth;

    std::cout << "Enter length and breadth of rectangle: "<<std::endl;
    std::cin >> length >> breadth;

    area_rectangle = area(length, breadth);

    std::cout << "Area of rectangle: " << area_rectangle <<std::endl;

    std::cout << "Enter length of the square: "<<std::endl;

    std::cin >> length;

    area_square = area(length);

    std::cout << "Area of square: " << area_square <<endl;

    return 0;
}
