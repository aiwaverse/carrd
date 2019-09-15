#ifndef _ABOUT_HPP_
#define _ABOUT_HPP_
#include <map>
#include "lesbian.hpp"
#include "music.hpp"
//click on the function calls on the bottom to advance, or on the object name
//to return (Lesbian)
void Lesbian::get_to_know(void) {
    std::map<std::string, std::string> about_me{
        {"dob", "09111999"},
        {"gender", "trans female (still un-transitioned)"},
        {"sexuality", "lesian"},
        {"pronouns", "she/her"},
        {"zodiac", "scorpio"},
        {"personality", "INFP-T"}};
    music();
}
#endif