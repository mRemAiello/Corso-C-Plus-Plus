#include <iostream>

// Definizione di una costante 'GRAVITA' con valore 9.81
#define GRAVITA 9.81

int main()
{
    //std::cout << "Hello World" << std::endl;

    std::cout << "Hello World" << std::endl << "Stringa 2" << std::endl;
    std::cout << "Hello World 2" << std::endl;

    // Gravità
    std::cout << GRAVITA << std::endl;

    // Input e output
    int numero = 10;
    std::cout << "Inserisci un numero intero: ";
    std::cin >> numero;
    std::cout << "Hai inserito: " << numero << std::endl;

    return 0;
}