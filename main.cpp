#include <iostream>

using namespace std;

int main(){
    float endPreis;
    const float mWst = 0.19;
    const float halberMwst = 0.07;
    int aNr, menge, preis;

    cout << "Eingabe Artikelnummer: \n";
    cin >> aNr;
    cout << "Eingabe Menge: \n";
    cin >> menge;
    cout << "Eingabe Preis: \n";
    cin >> preis;

    if(aNr <= 1000){
        endPreis = preis * menge + (preis * menge * halberMwst);
    } else{
        endPreis = preis * menge + (preis * menge * mWst);
    }
    cout << "Der Endpreis belaeuft sich auf " << endPreis << " euro";
    return 0;
}
