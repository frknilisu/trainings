#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include "media.h"

#include <vector>

class MediaPlayer
{
public:
    MediaPlayer();
    ~MediaPlayer();
    void add(const Media* media);
    void play();
private:
    std::vector<const Media*> _tracks;
};

#endif // MEDIAPLAYER_H
