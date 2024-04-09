#include "ComplexNumber.hpp"

// Definizione del costruttore
ComplexNumber::ComplexNumber(double r, double i) : real(r), imag(i) {}

// Definizione dell'operatore +
ComplexNumber ComplexNumber::operator+(const ComplexNumber & OtherNumber) {
    return ComplexNumber(real + OtherNumber.real, imag + OtherNumber.imag);
}

// Definizione dell'operatore ==
bool ComplexNumber::operator==(const ComplexNumber & OtherNumber) {
    return real == OtherNumber.real && imag == OtherNumber.imag;
}

// Definizione della funzione per calcolare il coniugato
ComplexNumber ComplexNumber::conjugate() {
    return ComplexNumber(real, -imag);
}

// Definizione della funzione per stampare un numero complesso
void ComplexNumber::print() {
    std::cout << real;
    if (imag >= 0)
        std::cout << "+";
    std::cout << imag << "i" << std::endl;
}
