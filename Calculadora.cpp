#include "calculadora.hpp"

Calculadora::Calculadora(int inicial) : valor(inicial) {}


int Calculadora::getValor() const {
    return valor;
}

void Calculadora::setValor(int novoValor) {
    valor = novoValor;
}

bool Calculadora::operator==(const Calculadora& other) const {
    return valor == other.valor;
}

bool Calculadora::operator!=(const Calculadora& other) const {
    return valor != other.valor;
}

bool Calculadora::operator>(const Calculadora& other) const {
    return valor > other.valor;
}

bool Calculadora::operator<(const Calculadora& other) const {
    return valor < other.valor;
}

bool Calculadora::operator>=(const Calculadora& other) const {
    return valor >= other.valor;
}

bool Calculadora::operator<=(const Calculadora& other) const {
    return valor <= other.valor;
}

std::ostream& operator<<(std::ostream& os, const Calculadora& calc) {
    os << "Valor da calculadora: " << calc.valor;
    return os;
}

std::istream& operator>>(std::istream& is, Calculadora& calc) {
    std::cout << "Digite um novo valor para a calculadora: ";
    is >> calc.valor;
    return is;
}

Calculadora& Calculadora::operator=(const Calculadora& other) {
    if (this != &other) {
        valor = other.valor;
    }
    return *this;
}