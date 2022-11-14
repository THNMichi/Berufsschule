//
// Created by micha on 07.11.2022.
//
#include <iostream>
#include <cstdlib>


using namespace std;

int main(){
    int random, guess;
    guess = 0;
    bool solved = false;

    random = rand() % 100 + 1;

    while (!solved){
        guess ++;
        cout << "zahl eingeben: ";
        cin >> guess;
        if (random == guess){
            cout << guess;
            solved = true;
        }else if (guess < random){
            cout << "deine Zahl ist zu klein: ";
        }else if(guess > random){
            cout << "deine Zahl ist zu gross: ";
        }
    }
    cout << "du hast " << guess << "Versuche gebraucht, die Richtige Zahl gefunden: ";
    return random;
}
