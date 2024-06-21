#include <iostream>

// Metodo che calcola la somma di due numeri interi
int somma(int a, int b) 
{
    int risultato = a + b;
    return risultato;
}

void print(std::string testo)
{
    std::cout << testo << std::endl;
}

int main() 
{
    int x = 5;
    int y = 3;

    int risultato = somma(x, y);

    print("Prova ");

    return 0;
}