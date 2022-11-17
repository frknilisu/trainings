#ifndef FLAC_H
#define FLAC_H

#include "media.h"

#include <string>

class Flac : public Media
{
public:
    Flac(const std::string&, const std::string&);
    ~Flac();
};

#endif // FLAC_H
