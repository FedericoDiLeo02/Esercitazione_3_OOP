#include "ComplexNumber.hpp"

int main() {
    // Creazione di due numeri complessi
    ComplexNumber a(1, 3);
    ComplexNumber b(2, -2);

    // Calcolo della somma dei due numeri complessi
    ComplexNumber sum = a + b;

    // Verifica se i due numeri complessi sono uguali
    bool equal = a == b;

    // Calcolo del coniugato del primo numero complesso
    ComplexNumber conj = a.conjugate();

    // Stampa dei risultati
    std::cout << "a = "; a.print();
    std::cout << "b = "; b.print();
    std::cout << "sum = "; sum.print();
    std::cout << "a and b are ";
    if (equal == true)
        std::cout << "equal"<< std::endl;
    else
       std::cout << "not equal"<< std::endl;
    std::cout << "Conjugate of a = "; conj.print();

    return 0;
}

