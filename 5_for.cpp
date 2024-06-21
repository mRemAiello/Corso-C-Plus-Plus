#include <iostream>

int main() 
{
    // Array "semplice"
    // int numeri[10];

    // Array
    int numero = 5;
    int numeri[] = {1, 2, 3, 4, 5};
    std::cout << numeri[1] << std::endl;

    // Calcolo lunghezza
    int length = sizeof(numeri) / sizeof(int);
    std::cout << "Lunghezza: " << length << std::endl;

    // Foreach
    for (int numero : numeri)
    {
        std::cout << "Numero: " << numero << std::endl;
    }

    // For
    for (int i = 0; i < length; i++)
    {
        std::cout << "Iterazione " << i << std::endl;
    }

    return 0;
}