#include "flac.h"

#include <iostream>

Flac::Flac(const std::string& artist, const std::string& song)
    : Media(artist, song, "Flac")
{
    std::cout << "Flac is created: " << this->getName() << std::endl;
}

Flac::~Flac()
{
    std::cout << "Mp3 is destructed: " << this->getName() << std::endl;
}
