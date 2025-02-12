#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    float peso, altura, imc;
    char salidaMenu;

    do {
        system("cls");
        cout << "Calculadora de IMC (Índice de Masa Corporal)" << endl;


        cout << "Ingrese su peso en kg: ";
        cin >> peso;
        cout << "Ingrese su altura en metros: ";
        cin >> altura;


        if (altura > 0) {
            imc = peso / (altura * altura);
            cout << "Su IMC es: " << imc << endl;


            if (imc < 18.5) {
                cout << "Está bajo de peso." << endl;
            } else if (imc >= 18.5 && imc < 24.9) {
                cout << "Tiene un peso normal." << endl;
            } else if (imc >= 25 && imc < 29.9) {
                cout << "Tiene sobrepeso." << endl;
            } else {
                cout << "Tiene obesidad." << endl;
            }
        } else {
            cout << "Error: la altura debe ser mayor que 0." << endl;
        }

        cout << "Desea realizar otro cálculo? Si=S o No=N" << endl;
        cin >> salidaMenu;
    } while (salidaMenu == 's' || salidaMenu == 'S');

    return 0;
}
