#include <iostream>

using namespace std;

int main()
{
    // Questo è un commento su una singola riga
    short temperatura = -10;
    int numero = 42; // Questo commento segue un'istruzione
    long popolazione = 780000000L;
    
    float valore = 3.14f;
    double pi = 3.14159265359;

    // Occhio alla somma tra tipi diversi
    short somma = numero + popolazione;
    cout << somma << endl;
    
    // 
    char carattere = 'A';
    bool isTrue = false;

    // If else
    bool condizione = true;

    // Stringhe
    string saluto = "Ciao, ";
    string nome = "Alice";

    // Concatenazione di stringhe
    string messaggio = saluto + nome;
    cout << messaggio << endl;
}