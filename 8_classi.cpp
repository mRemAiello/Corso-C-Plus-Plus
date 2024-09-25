#include <iostream>

using namespace std;

class Automobile
{
    private:
    string _marca;
    string _modello;
    int _anno;

    public:
    // Costruttore con parametri
    Automobile(string marca, string mod, int a)
    {
        _marca = marca;
        _modello = mod;
        _anno = a;
    }

    Automobile(string m, int a)
    {
        _marca = m;
        _anno = a;
        _modello = "Sconosciuto";
    }

    // Costruttore predefinito senza parametri
    Automobile()
    {
        _marca = "Sconosciuta";
        _modello = "Sconosciuto";
        _anno = 0;
    }

    void mostraInformazioni() 
    {
        cout << "Marca: " << _marca << endl;
        cout << "Modello: " << _modello << endl;
        cout << "Anno: " << _anno << endl;
        cout << endl;
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