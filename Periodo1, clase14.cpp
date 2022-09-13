#include <iostream> 
using namespace std;

int main(){
	int numerol, numero2, suma;
	cout << "Ingrese el primer numero: ";
	cin >> numerol; 
	cout << "Ingrese el segundo numero: ";
	cin >> numero2;
	for (int i= numerol; i <= numero2; i++) { 
		suma =suma + 1;
	}
	cout << "La suma es: "<< suma;
}
