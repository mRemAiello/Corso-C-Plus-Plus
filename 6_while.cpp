#include <iostream>

int main() 
{
    int numero = 0;

    std::cout << "Inserisci un numero (-1 per uscire): ";
    std::cin >> numero;

    while (numero != -1) 
    {
        std::cout << "Hai inserito: " << numero << std::endl;
        std::cout << "Inserisci un numero (-1 per uscire): ";
        std::cin >> numero;
    }

    std::cout << "Uscita dal programma." << std::endl;

    return 0;
}