#include<iostream>
#include<stdio.h>
#include<time.h>

using namespace std;


void insertionSort(int vetor[] , int tam){
    for (int i = 0; i < tam ; i++)
    {
        cout << "iteracao " << i << endl;
        int j=i+1;
        int pivo = vetor[j];
        while(j > 0 && pivo < vetor[j-1]){
            j--;
           if (pivo <  vetor[j])
           {
               int aux;
               aux = vetor[j];
               vetor[j] = pivo;
               vetor[j+1] = aux;
            }
        }
        
    }
}

int  main(int argc, const char** argv) {
    srand(time(NULL));
    int vetTeste[1000000];
    for(int i = 0 ; i < 1000000 ; i++)
    {
        vetTeste[i] = rand() % 100;
    }
   
    insertionSort(vetTeste,1000000);
    return 0;
}