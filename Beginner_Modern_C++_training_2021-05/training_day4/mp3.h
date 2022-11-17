#ifndef MP3_H
#define MP3_H

#include "media.h"

#include <string>

class Mp3 : public Media
{
public:
    Mp3(const std::string&, const std::string&);
    ~Mp3();
};

#endif // MP3_H
