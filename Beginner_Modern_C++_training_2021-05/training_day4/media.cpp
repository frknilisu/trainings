#include "media.h"

#include <iostream>

Media::Media(const std::string& artist, const std::string& song, const std::string& decoding)
    : _artist(artist), _song(song), _decoding(decoding)
{
    std::cout << "Media base is created." << std::endl;
}

Media::~Media()
{
    std::cout << "Media base is destructed." << std::endl;
}

void Media::play() const
{
    std::cout << this->_artist << " – " << this->_song << ". Decoding: " << this->_decoding << std::endl;
}

std::string Media::getName() const
{
    return this->_artist + " - " + this->_song;
}

