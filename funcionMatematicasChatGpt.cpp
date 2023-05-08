#include <iostream>

using namespace std;

int main() {
    int num1, num2, suma, resta, multiplicacion;
    float division;
    
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = static_cast<float>(num1) / num2;
    
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicación es: " << multiplicacion << endl;
    cout << "La división es: " << division << endl;
    
    return 0;
}

