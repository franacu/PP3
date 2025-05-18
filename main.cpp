#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria {
private:  // 👈 Ocultamiento de datos (atributos privados)
    string titular;
    double saldo;
    string numeroCuenta;

public:  // 👈 Interfaz pública (métodos accesibles)
    // Constructor
    CuentaBancaria(string tit, double sal, string num) : titular(tit), saldo(sal), numeroCuenta(num) {}

    // Métodos públicos para interactuar con los datos ocultos (encapsulamiento)
    void depositar(double monto) {
        if (monto > 0) {
            saldo += monto;
            cout << "Depósito exitoso. Saldo actual: $" << saldo << endl;
        } else {
            cout << "Monto inválido." << endl;
        }
    }

    void retirar(double monto) {
        if (monto > 0 && monto <= saldo) {
            saldo -= monto;
            cout << "Retiro exitoso. Saldo actual: $" << saldo << endl;
        } else {
            cout << "Fondos insuficientes o monto inválido." << endl;
        }
    }

    // Getter (método para acceder a un dato oculto)
    double consultarSaldo() const {
        return saldo;
    }

    // Otro getter
    string getTitular() const {
        return titular;
    }
};

int main() {
    // Crear una cuenta
    CuentaBancaria cuenta("Juan Pérez", 1000.0, "ES123456789");

    // Interactuar con la cuenta usando métodos públicos (encapsulamiento)
    cuenta.depositar(500);      // ✅ Válido
    cuenta.retirar(200);        // ✅ Válido
    // cuenta.saldo = 1000000;  // ❌ Error: saldo es privado (ocultamiento de datos)

    // Consultar saldo (a través de un método)
    cout << "Titular: " << cuenta.getTitular() << endl;
    cout << "Saldo actual: $" << cuenta.consultarSaldo() << endl;

    return 0;
}
