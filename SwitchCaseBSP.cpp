#include <iostream>
// Beispiel Programm zum Switch Case
using namespace std;

int main() {
    int brutolohn, stundenlohn, lohngruppe, arbeitszeit;

    cout << "bitte geben Sie ihre Lohngruppe ein: \n";
    cin >> lohngruppe;

    cout << "bitte geben Sie ihre Arbeitszeit in Stunden an: \n";
    cin >> arbeitszeit;

    switch (lohngruppe) {
        case 1:
            stundenlohn = 17;
            brutolohn = stundenlohn * arbeitszeit;
            cout << "Ihr Brutolohn belaeuft sich auf: " << brutolohn;
            break;

        case 2:
            stundenlohn = 20;
            brutolohn = stundenlohn * arbeitszeit;
            cout << "Ihr Brutolohn belaeuft sich auf: " << brutolohn;
            break;

        case 3:
            stundenlohn = 22;
            brutolohn = stundenlohn * arbeitszeit;
            cout << "Ihr Brutolohn belaeuft sich auf: " << brutolohn;
            break;

        case 4:
            stundenlohn = 23;
            brutolohn = stundenlohn * arbeitszeit;
            cout << "Ihr Brutolohn belaeuft sich auf: " << brutolohn;
            break;

        case 5:
            stundenlohn = 25;
            brutolohn = stundenlohn * arbeitszeit;
            cout << "Ihr Brutolohn belaeuft sich auf: " << brutolohn;
            break;

        case 6:
            stundenlohn = 26;
            brutolohn = stundenlohn * arbeitszeit;
            cout << "Ihr Brutolohn belaeuft sich auf: " << brutolohn;
            break;

        default:
            cout << "Es wurde keine gueltige Lohngruppe angegeben";
    }
    return 0;
}

