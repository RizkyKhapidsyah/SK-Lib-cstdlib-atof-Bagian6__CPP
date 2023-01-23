#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    std::cout << std::atof("0.0000000123") << '\n'
        << std::atof("0.012") << '\n'
        << std::atof("15e16") << '\n'
        << std::atof("-0x1afp-2") << '\n'
        << std::atof("inF") << '\n'
        << std::atof("Nan") << '\n'
        << std::atof("invalid") << '\n';

    _getch();
    return 0;
}