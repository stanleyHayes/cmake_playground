#include <iostream>
#include <square/square.hh>
#include <string>

int main() {
    const std::string purpose{"Square"};
    constexpr  double side{4.0};
    square::Square s{purpose, side};
    std::cout << "area: " << s.area() << std::endl;
    std::cout << "perimeter" << s.perimeter() << std::endl;
    s.draw();
    s.set_side(8.0);
    std::cout << "area: " << s.area() << std::endl;
    std::cout << "perimeter" << s.perimeter() << std::endl;
    s.draw();
}