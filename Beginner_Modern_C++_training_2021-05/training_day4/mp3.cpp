#include "mp3.h"

#include <iostream>

Mp3::Mp3(const std::string& artist, const std::string& song)
    : Media(artist, song, "Mp3")
{
    std::cout << "Mp3 is created: " << this->getName() << std::endl;
}

Mp3::~Mp3()
{
    std::cout << "Mp3 is destructed: " << this->getName() << std::endl;
}
