#ifndef CALCULADORA_HPP
#define CALCULADORA_HPP

#include <iostream>

class Calculadora {
    public:
        // Construtor
        Calculadora(int inicial);
        
        // Sobrecarga de operadores de comparação
        bool operator==(const Calculadora& other) const;
        bool operator!=(const Calculadora& other) const;
        bool operator>(const Calculadora& other) const;
        bool operator<(const Calculadora& other) const;
        bool operator>=(const Calculadora& other) const;
        bool operator<=(const Calculadora& other) const;

        // Sobrecarga de operadores de entrada e saída
        friend std::ostream& operator<<(std::ostream& os, const Calculadora& calc);
        friend std::istream& operator>>(std::istream& is, Calculadora& calc);

        // Sobrecarga do operador de atribuição
        Calculadora& operator=(const Calculadora& other);

        // Getters e setters
        int getValor() const;
        void setValor(int novoValor);

    private:
        int valor;

};

#endif // CALCULADORA_HPP