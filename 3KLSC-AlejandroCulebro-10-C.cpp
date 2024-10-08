#include <iostream>
using namespace std;

int sumarDigitosRecursiva(long long int valor) {
    if (valor <= 9) {
        return valor;
    } else {
        return sumarDigitosRecursiva(valor / 10) + valor % 10;
    }
}

int sumarDigitosIterativa(long long int valor) {
    int suma_total = 0;
    while (valor > 9) {
        suma_total += valor % 10;
        valor /= 10;
    }
    return suma_total + valor;
}

int main() {
    long long int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    cout << "El resultado de la suma iterativa es: " << sumarDigitosIterativa(numero) << endl;
    cout << "El resultado de la suma recursiva es: " << sumarDigitosRecursiva(numero) << endl;
}
