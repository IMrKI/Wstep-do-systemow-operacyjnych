#include <iostream>
#include "Pole.h"
#include "Objetosci.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Pole().oblicpoleProstopaloscian(1, 2, 3);
    Pole().oblicpoleProstkant(4, 6);
    Objetosci().oblicObjetoscProstopaloscian(4,6,8);
    return 0;
}
