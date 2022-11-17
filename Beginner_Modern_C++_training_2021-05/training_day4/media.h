#ifndef MEDIA_H
#define MEDIA_H

#include <string>

class Media
{
public:
    Media(const std::string&, const std::string&, const std::string&);
    virtual ~Media();
    void play() const;
    std::string getName() const;
private:
    std::string _artist;
    std::string _song;
    std::string _decoding;
};

#endif // MEDIA_H
