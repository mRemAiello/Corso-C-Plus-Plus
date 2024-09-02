#include <iostream>

// Definizione di una costante 'GRAVITA' con valore 9.81
#define GRAVITA 9.81

using namespace std;

// Qualora non si riesca a scrivere dal Terminale:
// Settings -> Extensions -> Run Code Configuration -> Run In Terminal (check the box).

int main()
{
    cout << "Hello World" << endl;
    cout << "Hello World 2" << endl;

    // Gravità
    cout << GRAVITA << endl;

    // Input e output
    int numero = 10;
    cout << "Inserisci un numero intero: ";
    cin >> numero;
    cout << "Hai inserito: " << numero << endl;

    return 0;
}