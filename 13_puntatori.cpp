#include <iostream>
using namespace std;

void main2(int *puntatore)
{
    *puntatore = 400;
}

int main()
{
    int numero = 42;          // Dichiarazione di una variabile intera
    int *puntatore = &numero; // Dichiarazione di un puntatore che punta a 'numero'

    cout << "Valore della variabile 'numero': " << numero << endl;
    cout << "Indirizzo di memoria di 'numero': " << &numero << endl;
    cout << "Contenuto del puntatore (indirizzo): " << puntatore << endl;
    cout << "Valore puntato dal puntatore (*puntatore): " << *puntatore << endl;
    cout << endl;

    // Modifica del valore tramite il puntatore
    *puntatore = 100;

    // Stampo i valori
    cout << "Valore della variabile 'numero': " << numero << endl;
    cout << "Indirizzo di memoria di 'numero': " << &numero << endl;
    cout << "Contenuto del puntatore (indirizzo): " << puntatore << endl;
    cout << "Valore puntato dal puntatore (*puntatore): " << *puntatore << endl;
    cout << endl;

    main2(&numero);

    // Stampo i valori
    cout << "Valore della variabile 'numero': " << numero << endl;
    cout << "Indirizzo di memoria di 'numero': " << &numero << endl;
    cout << "Contenuto del puntatore (indirizzo): " << puntatore << endl;
    cout << "Valore puntato dal puntatore (*puntatore): " << *puntatore << endl;

    return 0;
}