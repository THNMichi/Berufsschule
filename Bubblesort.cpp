//09.01.2023
#include <iostream>
// Beispiel Programm zum Bubblesort
using namespace std;

int main() {

    bool getauscht = false;
    int arr[] = {5, 2, 8, 4, 1, 7, 9, 3, 0};
    int temp;

    while(!getauscht){
        getauscht = true;
        for (int i = 0; i < 8; ++i) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                getauscht = false;
            }
        }
    }

    for (int i = 0; i < 8; ++i) {
        cout << arr[i];
    }

    return 0;

}