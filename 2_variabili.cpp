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
    
    char carattere = 'A';
    bool isTrue = true;

    std::string nome = "Alice";

    // If else
    bool condizione = true;

    // Stringhe
    string female = "Alice";
    string saluto = "Ciao, ";
    int numero_10 = 50;
    string messaggio;

    // Concatenazione di stringhe
    messaggio = saluto + female;  
    cout << messaggio << std::endl;
}