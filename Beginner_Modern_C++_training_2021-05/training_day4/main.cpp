#include <iostream>

#include "mediaplayer.h"
#include "mp3.h"
#include "flac.h"

using namespace std;

int main()
{
    cout << "Welcome to My Extraordinary MediaPlayer" << endl;
    MediaPlayer player;
    player.add(new Mp3("Editors", "Papillon"));
    player.add(new Flac("Macklemore", "Can't hold us"));
    player.play();
    return 0;
}
