#include <iostream>

void print(std::string testo)
{
    std::cout << testo << std::endl;
}

// Metodo che calcola la somma di due numeri interi
int somma(int a, int b)
{
    int risultato = a + b;
    return risultato;
}

int main()
{
    int x = 5;
    int y = 3;
    std::string nome = "Mirko";

    int risultato = somma(x, y);

    print("Prova ");

    return 0;
}