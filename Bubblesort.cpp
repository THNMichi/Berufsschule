//09.01.2023
#include <iostream>
// Beispiel Programm zum Bubblesort
using namespace std;


void tausche (int &x, int &y);


int feld[] = {5, 2, 8, 458, 1, 7, 9, 3, 0, 3, 11};
int temp;

int size = sizeof(feld)/ sizeof(int);

int main() {

    bool getauscht = false;

    while(!getauscht){
        getauscht = true;
        for (int i = 0; i < size - 1; i++) {
            if (feld[i] > feld[i + 1]) {
                tausche(feld[i],feld[i + 1]);
                getauscht = false;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << feld[i] << ",";
    }

    return 0;

}

void tausche(int &x, int &y){
    temp = x;
    x = y;
    y = temp;
}