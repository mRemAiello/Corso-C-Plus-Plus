#include <iostream>

using namespace std;

// Definizione di un'interfaccia per una forma geometrica
class IFormaGeometrica
{
public:

    // Metodo puro virtuale per calcolare l'area
    virtual double calcolaArea() const = 0;

    // Metodo puro virtuale per calcolare il perimetro
    virtual double calcolaPerimetro() const = 0;

    // Distruttore virtuale
    virtual ~IFormaGeometrica() {}

};


// Implementazione della classe Rettangolo che deriva da IFormaGeometrica
class Rettangolo : public IFormaGeometrica 
{
private:
    double larghezza;
    double altezza;

public:
    Rettangolo(double l, double h) 
    {
        larghezza = l;
        altezza = h;
    }

    double calcolaArea() const override 
    {
        return larghezza * altezza;
    }

    double calcolaPerimetro() const override 
    {
        return 2 * (larghezza + altezza);
    }

    void funzioneNuova()
    {
    }
};

// Implementazione della classe Cerchio che deriva da IFormaGeometrica
class Cerchio : public IFormaGeometrica 
{
private:
    double raggio;

public:
    Cerchio(double r) 
    {
        raggio = r;
    }

    double calcolaArea() const override 
    {
        return 3.14 * raggio * raggio;
    }

    double calcolaPerimetro() const override 
    {
        return 2 * 3.14 * raggio;
    }
};

int main() 
{
    // int numero = 5;
    // int* puntatore = 
    // 0x15bb63c6d50 -> 5
    // rettagolo -> 0x30303 -> Rettangolo() -> calcolaArea
    // rettangolo -> Rettangolo() -> calcolaArea
    IFormaGeometrica* rettangolo = new Rettangolo(5, 10);
    IFormaGeometrica* cerchio = new Cerchio(7);

    cout << rettangolo << endl;

    cout << "Area del rettangolo: " << rettangolo->calcolaArea() << endl;
    cout << "Perimetro del rettangolo: " << rettangolo->calcolaPerimetro() << endl;

    cout << "Area del cerchio: " << cerchio->calcolaArea() << endl;
    cout << "Perimetro del cerchio: " << cerchio->calcolaPerimetro() << endl;

    delete rettangolo;
    delete cerchio;

    return 0;
}