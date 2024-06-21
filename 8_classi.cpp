#include <iostream>

class Automobile 
{

    private:
    int variabile;

    public:
    std::string marca;
    std::string modello;
    int anno;

    // Costruttore con parametri
    Automobile(std::string m, std::string mod, int a) 
    {
        marca = m;
        modello = mod;
        anno = a;
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
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Modello: " << modello << std::endl;
        std::cout << "Anno: " << anno << std::endl;
    }

};

int main() 
{
    // Creazione di un oggetto 'auto1' con il costruttore
    Automobile auto1("Ford", "Focus", 2022);
    Automobile auto2;

    auto1.mostraInformazioni();
    auto2.mostraInformazioni();

    return 0;
}