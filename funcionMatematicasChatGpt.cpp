#include <iostream>

using namespace std;

int main() {
    int num1, num2, suma, resta, multiplicacion;
    float division;
    
    cout << "Ingresa el primer n�mero: ";
    cin >> num1;
    cout << "Ingresa el segundo n�mero: ";
    cin >> num2;
    
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = static_cast<float>(num1) / num2;
    
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicaci�n es: " << multiplicacion << endl;
    cout << "La divisi�n es: " << division << endl;
    
    return 0;
}

