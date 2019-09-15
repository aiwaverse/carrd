#ifndef _OTHERS_HPP_
#define _OTHERS_HPP_
#include <iostream>
#include <string>
#include "lesbian.hpp"
//well now you can only return
void Lesbian::other_accs(){
    using std::cin;
    using std::cout;
    std::string input{};
    std::getline(cin, input);
    if ((input == "steam") || (input == "origin"))
        cout << "Aiwaverse";
    else if (input == "spotify")
        cout << "https://spoti.fi/2Q5iqCd";
    else if (input == "instagram")
        cout << "@aiwaverse";
    else if (input == "rant/nsfw")
        cout << "@aiwaneechan";
}
#endif