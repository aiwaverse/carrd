#ifndef _INTERESTS_HPP_
#define _INTERESTS_HPP_
#include <iostream>
#include <string>
#include "lesbian.hpp"
#include "other_accs.hpp"
//click on the function calls on the bottom to advance, or on the object name
//to return (Lesbian)
void Lesbian::interests(int op) {
    switch (op) {
        case 1:
            std::cout << "programming and computer science (duh)\n";
            break;
        case 2:
            std::cout << "high energy and particle psychics\n";
            break;
        case 3:
            std::cout << "psychology\n";
            break;
        case 4:
            std::cout << "modern and internet related history\n";
            break;
        case 5:
            std::cout << "gaming\n";
            break;
        default:
            std::cout << "how tf you got here\n";
    }
    other_accs();
}
#endif