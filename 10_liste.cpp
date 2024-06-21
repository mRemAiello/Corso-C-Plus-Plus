#include <iostream>
#include <list>

using namespace std;

int main() 
{
    list<int> myList = {1, 2, 3, 4, 5};

    // Inserire un elemento in posizione specifica
    auto it = myList.begin();
    std::advance(it, 2);
    myList.insert(it, 10);

    myList.push_back(10); // Inserisce un elemento alla fine
    myList.push_front(20); // Inserisce un elemento all'inizio
    myList.insert(it, 30); // Inserisce un elemento in una posizione specifica (it è un iteratore)
    myList.insert(it, 5, 40); // Inserisce 5 elementi di valore 40 in una posizione specifica

    // Iterare e stampare gli elementi
    for (int n : myList) 
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Rimozione
    myList.pop_back(); // Rimuove l'ultimo elemento
    myList.pop_front(); // Rimuove il primo elemento
    myList.erase(it); // Rimuove l'elemento alla posizione it
    
    auto it1 = myList.begin();
    auto it2 = myList.begin();
    std::advance(it2, 5);
    myList.erase(it1, it2); // Rimuove elementi in un intervallo [it1, it2)
    myList.clear(); // Rimuove tutti gli elementi

    // Capacità
    bool empty = myList.empty(); // Verifica se la lista è vuota
    std::size_t size = myList.size(); // Restituisce il numero di elementi nella lista
    myList.resize(10); // Ridimensiona la lista a 10 elementi (troncando o aggiungendo elementi)
    myList.resize(10, 5); // Ridimensiona a 10 elementi, aggiungendo elementi di valore 5 se necessario

    // Stampare gli elementi modificati
    for (int n : myList) 
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}