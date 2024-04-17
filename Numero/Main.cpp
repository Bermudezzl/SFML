#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Audio.h"

using namespace std;

int main() {
    srand(time(NULL));
    int numeroSecreto = rand() % 100;

    cout << "�Adivina el n�mero!" << endl;
    cout << "Pienso en un n�mero entre 0 y 99" << endl;

    int intentos = 0;
    int intento;

    do {
        cout << "�Cu�l n�mero crees que es?: ";
        cin >> intento;
        intentos++;

        if (intento == numeroSecreto) {
            cout << "�Adivinaste el n�mero en " << intentos << " intentos!" << endl;

            //SFML
            Audio audio;
            audio.playSound("PesoPumba.wav");
            break;
            //SFML

        }
        else if (intento < numeroSecreto) {
            cout << "Demasiado bajo. Intenta otra vez." << endl;
        }
        else {
            cout << "Demasiado alto. Intenta otra vez." << endl;
        }
    } while (true);

    return 0;
}