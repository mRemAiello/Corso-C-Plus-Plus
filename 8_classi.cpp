#include <iostream>

using namespace std;

class Automobile
{
    private:
    string marca;
    string modello;
    int anno;

    public:
    // Costruttore con parametri
    Automobile(string m, string mod, int a)
    {
        marca = m;
        modello = mod;
        anno = a;
    }

    Automobile(string m, int a)
    {
        marca = m;
        anno = a;
        modello = "Sconosciuto";
    }

    // Costruttore predefinito senza parametri
    Automobile()
    {
        marca = "Sconosciuta";
        modello = "Sconosciuto";
        anno = 0;
    }

    void mostraInformazioni() 
    {
        std::cout << "Marca: " << marca << endl;
        std::cout << "Modello: " << modello << endl;
        std::cout << "Anno: " << anno << endl;
        std::cout << endl;
    }
};

int main() 
{
    // Creazione di un oggetto 'auto1' con il costruttore
    Automobile auto1("Ford", "Focus", 2022);
    Automobile auto2;
    Automobile auto3("Ford", 2018);

    auto1.mostraInformazioni();
    auto2.mostraInformazioni();
    auto3.mostraInformazioni();

    return 0;
}