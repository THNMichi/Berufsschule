//09.01.2023
#include <iostream>
// Beispiel Programm zum Bubblesort
using namespace std;


void tausche (int &x, int &y);


int arr[] = {5, 2, 8, 4, 1, 7, 9, 3, 0, 3, 11};
int temp;



int main() {

    bool getauscht = false;

    while(!getauscht){
        getauscht = true;
        for (int i = 0; i < 11; i++) {
            if (arr[i] > arr[i + 1]) {
                tausche(arr[i],arr[i + 1]);
                getauscht = false;
            }
        }
    }

    for (int i = 0; i < 11; i++) {
        cout << arr[i];
    }

    return 0;

}

void tausche(int &x, int &y){
    temp = x;
    x = y;
    y = temp;
}