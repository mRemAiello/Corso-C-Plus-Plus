class ClasseBase 
{
    public:
    int attributo_base;

    void metodo_base() 
    {
        // Codice del metodo base
    }
};

class ClasseBase2
{

};

class ClasseDerivata : public ClasseBase, public ClasseBase2
{
    public:
    int attributo_derivato;
    
    void metodo_derivato() 
    {
        // Codice del metodo derivato
    }
};

int main()
{
    ClasseDerivata oggetto;
    oggetto.attributo_base = 42; // Accesso all'attributo della classe base
    oggetto.metodo_base(); // Chiamata al metodo della classe base
    oggetto.attributo_derivato = 10; // Accesso all'attributo della classe derivata
    oggetto.metodo_derivato(); // Chiamata al metodo della classe derivata
}