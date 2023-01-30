//
// Created by micha on 30.01.2023.
//
#include <iostream>
#include <cstdlib>
// Beispiel Programm zum Insertionsort mit Zuffalszahlen
using namespace std;

void fillRand(int feld[],int size, int min, int max);
void insertionSort(int feld[],int size);
void ausgabe(int fled[],int size);

int main() {
    const int size = 8;
    int feld[size];

    srand((unsigned) time(NULL));

    fillRand(feld, size, 0,100);
    insertionSort(feld,size);
    ausgabe(feld, size);
    return 0;

}
void fillRand(int feld[], int size, int min, int max) {
    for (int i = 0; i < size; ++i) {
        float randFloat = (float) rand()/RAND_MAX;
        feld[i] = (int) (randFloat * (max - min)) + min;
    }
}

void insertionSort(int feld[], int size){
    int i, temp, j;
    for (i = 1; i < size; i++)
    {
        temp = feld[i];
        j = i - 1;


        while (j >= 0 && feld[j] > temp)
        {
            feld[j + 1] = feld[j];
            j = j - 1;
        }
        feld[j + 1] = temp;
    }

}


void ausgabe(int feld[], int size){
    for(int i = 0; i < size; i++){
        cout << feld[i] << ",";
    }
}