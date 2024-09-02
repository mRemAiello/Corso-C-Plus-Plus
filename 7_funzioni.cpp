#include <iostream>

using namespace std;

void print(string testo)
{
    cout << testo << endl;
}

// Metodo che calcola la somma di due numeri interi
int somma(int a, int b)
{
    int risultato = a + b;
    return risultato;
}

int somma(double x, double y)
{
    return x + y;
}

int main()
{
    int x = 5;
    int y = 3;
    string nome = "Mirko";

    int risultato = somma(x, y);
    int risultato_2 = somma(2.5f, 3.0f);

    print(to_string(risultato));
    print(to_string(risultato_2));

    return 0;
}