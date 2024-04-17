#include "Audio.h"

Audio::Audio() {
}

void Audio::playSound(const std::string& filename) {
    if (!buffer.loadFromFile(filename)) {
        return;
    }

    sound.setBuffer(buffer);
    sound.play();

    while (sound.getStatus() == sf::Sound::Playing) {
    }
}