#include <iostream>
using namespace std;
    short Convertir(short k)
    {
        short x;
        x=1000*k;
        return x;
    }
   
    main()
    {
        short k2;
        cout<<"Convertor de km a m"<<endl;
        cout<<"Ingrese kilometros: \n";cin>>k2;
        cout<<"La distancia en metros: \n"<<Convertir(k2);
        cout<<endl;
        system("pause");
        return 0;
}
