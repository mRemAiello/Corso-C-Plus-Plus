#include <iostream>

using namespace std;

class ClasseBase 
{
    public:
    string nome;
    int attributo_base;

    protected:
    void metodo_base() 
    {
        // Codice del metodo base
    }
};


class ClasseBase2
{
};


class ClasseBase3
{
};


class ClasseDerivata : public ClasseBase, public ClasseBase2, public ClasseBase3
{
    public:
    int attributo_derivato;
    
    void metodo_derivato() 
    {
        attributo_base = 0;
        // Codice del metodo derivato
        metodo_base();
    }
};


int main()
{
    ClasseDerivata oggetto;

    oggetto.attributo_base = 42; // Accesso all'attributo della classe base
    
    //oggetto.metodo_base(); // Chiamata al metodo della classe base
    
    oggetto.attributo_derivato = 10; // Accesso all'attributo della classe derivata
    oggetto.metodo_derivato(); // Chiamata al metodo della classe derivata

    oggetto.nome = "Ciao";
}