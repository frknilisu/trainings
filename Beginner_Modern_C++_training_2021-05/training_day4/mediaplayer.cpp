#include "mediaplayer.h"

#include <iostream>

MediaPlayer::MediaPlayer()
{
    std::cout << "MediaPlayer is created." << std::endl;
}

MediaPlayer::~MediaPlayer()
{
    for(const Media* m: this->_tracks)
    {
        delete m;
    }
    std::cout << "MediaPlayer is destructed." << std::endl;
}

void MediaPlayer::add(const Media* media)
{
    this->_tracks.push_back(media);
}

void MediaPlayer::play()
{
    for(const Media* m: this->_tracks)
    {
        std::cout << "Playing Track: ";
        m->play();
    }
}
