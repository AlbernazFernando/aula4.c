#include <iostream>

int verificaPar(int valor) {
    if (valor % 2 == 0) {
        return 1; // Número é par
    } else {
        return 0; // Número é ímpar
    }
}

int main() {
    int numero;

    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    int resultado = verificaPar(numero);

    if (resultado == 1) {
        std::cout << "O número " << numero << " é par." << std::endl;
    } else {
        std::cout << "O número " << numero << " é ímpar." << std::endl;
    }

    return 0;
}
