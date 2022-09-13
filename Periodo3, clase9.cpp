#include "iostream"
using namespace std; 
int main()
{
	int opcion = 0;
	do
	{
		cout << "Ingrese 1 para mostrar mensaje\n"; 
		cout << "Ingrese 2 para hacer algo más\n"; 
		cout << "Ingrese para salir\n";
		
		cout<<"Ingrese una opción a ejecutar\n"; 
		cin >> opcion;
	} 

	while (opcion != 0);
	system("PAUSE");
	
	return 0;
}
