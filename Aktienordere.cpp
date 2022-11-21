#include <iostream>

using namespace std;
// Aktienorder Quellcode, nach Vorgabe eines Struktogramms.
int main() {
    float kurs, gebuehren, kurswert;
    int stuekzahl;
    bool online, kauf;
    const float gebGS = 0.01;
    const float gebOL = 0.005;
    const float minGebGS = 25.00;
    const float minGebOL = 12.5;

    cout << "Geben sie den Kurs an: \n";
    cin >> kurs;
    cout << "Geben sie die Stuekzahl an: \n";
    cin >> stuekzahl;

    kurswert = kurs * stuekzahl;

    cout << "Handelt es sich um einen Online Auftrag?: \n";
    cin >> online;
    cout << "Handelt es sich um einen Kauf?: \n";
    cin >> kauf;

    if (online) {
        gebuehren = kurswert * gebOL;
        if (kauf && gebuehren < minGebOL) {
            gebuehren = minGebOL;
        }
    } else {
        gebuehren = kurswert * gebGS;
        if (gebuehren < minGebGS) {
            gebuehren = minGebGS;
        }
    }
    if (kauf) {
        kurswert = kurswert + gebuehren;
        cout << "Sie zahlen: " << kurswert;
    } else {
        kurswert = kurswert - gebuehren;
        cout << "Sie erhalten: " << kurswert;
    }
    return 0;
}

