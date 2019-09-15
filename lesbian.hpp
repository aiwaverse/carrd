#ifndef _LESBIAN_HPP_
#define _LESBIAN_HPP_
#include <map>
#include <string>
#include <vector>
//please click on the header files for more info
//or click on the get_to_know function
//actually any function works, i'm nice
class Lesbian {
   private:
    std::vector<std::string> musics{};
    std::map<std::string, std::string> my_biases{};
    void music(void);
    void what_i_like(void);
    void biases(void);
    void other_accs(void);
    void interests(int);

   public:
    void get_to_know(void);
};
/*===================REALLY BIG DISCLAIMER==================
⠀this carrd is made with real valid c++ code, it can be compiled if you want
⠀but for the love of gods this is not a good programming practices example
⠀it was made this way to work as a carrd, but not as good program
⠀so, don't hate me, i'm a good programmer i swear, have fun :D */
#include "about.hpp"
#include "biases.hpp"
#include "interests.hpp"
#include "music.hpp"
#include "other_accs.hpp"
#endif