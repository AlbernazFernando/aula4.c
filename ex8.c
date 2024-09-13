#include <iostream>

int verificaSinal(int valor) {
    if (valor > 0) {
        return 1;    // Valor é positivo
    } else if (valor < 0) {
        return -1;   // Valor é negativo
    } else {
        return 0;    // Valor é zero
    }
}

int main() {
    int numero;

    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    int resultado = verificaSinal(numero);

    if (resultado == 1) {
        std::cout << "O número " << numero << " é positivo." << std::endl;
    } else if (resultado == -1) {
        std::cout << "O número " << numero << " é negativo." << std::endl;
    } else {
        std::cout << "O número " << numero << " é zero." << std::endl;
    }

    return 0;
}
