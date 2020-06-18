#ifndef LAB11_POLE_H
#define LAB11_POLE_H

#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Pole {
public:
    void oblicpoleProstopaloscian(int a, int b, int c) {
        int pole1 = 2 * (a * c + a * b + b * c);
        cout << "Pole prostopadłasciana = " << pole1 << endl;
    }

    void oblicpoleProstkant(int a, int b) {
        int pole2 = a * b;
        cout << "Pole prostokąta = " << pole2 << endl;
    }

};


#endif //LAB11_POLE_H
