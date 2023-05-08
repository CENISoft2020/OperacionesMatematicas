#include <iostream>

/* Operaciones matetematicas */
using namespace std;

int main() {
	
	int num1,num2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	//----- mostrar y entra en consola las varibles num1 y num2;
	
	cout<<"Hacker digita tu Numero 1:";cin>>num1;
	cout<<"\n Hacker digita tu Numero 2:";cin>>num2;
	
	//--------- procesos internos de la aplicacion (backent) ---- //
	
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;

   //------ mostrar procesos de la aplicacion (fronter) --------//	
	
	cout<<"hackers la suma de esos numero es igual a : "<<suma;
	cout<<"\n hackers la resta de esos numero es igual a : "<<resta;
	cout<<"\n hackers la multiplicacion de esos numero es igual a : "<<multiplicacion;
	cout<<"\n hackers la division de esos numero es igual a : "<<division;
	
	
	return 0;
}
