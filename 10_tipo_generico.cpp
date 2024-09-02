#include <iostream>
#include <string>

using namespace std;

class Acqua 
{
    public:
    string getType()
    {
        return "Acqua";
    }
};

class Vino 
{
    public:
    string getType()
    {
        return "Vino";
    }
};

class Olio 
{
    public:
    string getType()
    {
        return "Olio";
    }
};

class Petrolio 
{
    public:
    string getType()
    {
        return "Petrolio";
    }
};


class CocaCola
{
    public:
    string getType()
    {
        return "Coca Cola";
    }
};


template <typename T>
class Contenitore 
{
    private:
    T content;
    string description;

    public:
    // Costruttore
    Contenitore(T c, string d)
    {
        content = c;
        description = d;
    }

    // Metodo per ottenere il contenuto
    T getContent()
    {
        return content;
    }

    string getDescription()
    {
        return description;
    }

    void setContent(T newContent) 
    {
        content = newContent;
    }

    // Metodo per impostare la descrizione
    void setDescription(std::string newDescription) 
    {
        description = newDescription;
    }

    // Metodo per stampare le informazioni del contenitore
    void printInfo()
    {
        std::cout << "Descrizione: " << description << ", Contenuto: " << content.getType() << std::endl;
    }
};

int main() 
{
    // Esempi di utilizzo della classe generica Container con classi specifiche
    Contenitore<Acqua> waterBottle(Acqua(), "Bottiglia di acqua");
    Contenitore<Vino> wineBottle(Vino(), "Bottiglia di vino");
    Contenitore<Olio> oilBottle(Olio(), "Bottiglia di olio");
    Contenitore<Petrolio> oilBarrel(Petrolio(), "Barile di petrolio");
    Contenitore<CocaCola> lattina(CocaCola(), "Lattina di Coca Cola");

    // Stampa delle informazioni dei contenitori
    waterBottle.printInfo();
    wineBottle.printInfo();
    oilBottle.printInfo();
    oilBarrel.printInfo();
    lattina.printInfo();

    return 0;
}