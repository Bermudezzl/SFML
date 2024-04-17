#ifndef AUDIO_H
#define AUDIO_H

#include <SFML/Audio.hpp>

class Audio {
public:
    Audio();
    void playSound(const std::string& filename);

private:
    sf::SoundBuffer buffer;
    sf::Sound sound;
};

#endif  