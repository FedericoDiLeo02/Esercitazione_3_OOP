#include <iostream>

// Dichiarazione della classe ComplexNumber per la rappresentare un numero complesso
class ComplexNumber {
public:
    double real;  // Parte reale del numero complesso
    double imag;  // Parte immaginaria del numero complesso

    // Costruttore che inizializza un numero complesso con parte reale r e parte immaginaria i
    ComplexNumber(double r, double i);

    // Sovraccarico dell'operatore + per sommare due numeri complessi
    ComplexNumber operator+(const ComplexNumber & OtherNumber);

    // Sovraccarico dell'operatore == per confrontare due numeri complessi
    bool operator==(const ComplexNumber & OtherNumber);

    // Funzione per calcolare il coniugato di un numero complesso
    ComplexNumber conjugate();

    // Funzione per stampare un numero complesso
    void print();
};
