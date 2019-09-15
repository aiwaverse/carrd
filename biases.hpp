#ifndef _BIASES_HPP_
#define _BIASES_HPP_
#include <chrono>
#include <iostream>
#include <random>
#include <string>
#include "interests.hpp"
#include "lesbian.hpp"
//click on the function calls on the bottom to advance, or on the object name
//to return (Lesbian)
void Lesbian::biases(void) {
    using namespace std::chrono;
    my_biases["loona"] = "yeojin";
    my_biases["iz*one"] = "nako";
    my_biases["red velvet"] = "wendy";
    my_biases["busters"] = "yeseo";
    my_biases["mamamoo"] = "yeojin";
    my_biases["oh my girl"] = "hyojung";
    //now we generate a random number and call what_i_like
    auto now = system_clock::now().time_since_epoch().count();
    std::mt19937 generator(now);
    std::uniform_int_distribution<int> distribution(1, 5);
    interests(distribution(generator));
}

#endif