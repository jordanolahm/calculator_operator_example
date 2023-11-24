#include "calculadora.hpp"
#include <iostream>

int main() {
    // Criando duas instâncias da Calculadora
    Calculadora calc1(10);
    Calculadora calc2(5);

    // Testando operadores de comparação
    if (calc1 == calc2) {
        std::cout << "calc1 eh igual a calc2\n";
    } else {
        std::cout << "calc1 nao eh igual a calc2\n";
    }

    if (calc1 != calc2) {
        std::cout << "calc1 eh diferente de calc2\n";
    } else {
        std::cout << "calc1 nao eh diferente de calc2\n";
    }

    if (calc1 > calc2) {
        std::cout << "calc1 eh maior que calc2\n";
    } else {
        std::cout << "calc1 nao eh maior que calc2\n";
    }

    if (calc1 < calc2) {
        std::cout << "calc1 eh menor que calc2\n";
    } else {
        std::cout << "calc1 nao eh menor que calc2\n";
    }

    if (calc1 >= calc2) {
        std::cout << "calc1 eh maior ou igual a calc2\n";
    } else {
        std::cout << "calc1 nao eh maior ou igual a calc2\n";
    }

    if (calc1 <= calc2) {
        std::cout << "calc1 eh menor ou igual a calc2\n";
    } else {
        std::cout << "calc1 nao eh menor ou igual a calc2\n";
    }

    // Testando operadores de entrada e saída
    std::cout << "Digite um novo valor para a calculadora (calc1): ";
    std::cin >> calc1;
    std::cout << "Novo valor da calculadora (calc1): " << calc1 << std::endl;

    std::cout << "Digite um novo valor para a calculadora (calc2): ";
    std::cin >> calc2;
    std::cout << "Novo valor da calculadora (calc2): " << calc2 << std::endl;

    // Testando operador de atribuição
    Calculadora calc3 = calc1; // Usando o operador de atribuição
    std::cout << "Valor da nova calculadora (calc3): " << calc3 << std::endl;

    return 0;
}