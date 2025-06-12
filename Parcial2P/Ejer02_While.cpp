#include <iostream>
using namespace std;

int main() {

    int numero=0, suma=0;
    cout<<"Para mostrar la suma presiona 0\n";

    do
    {
       cout<< "Porfavor ingresa un numero:";
       cin>> numero;
       suma += numero; 
       
    } while (numero != 0);
    
    cout<<"la suma de los numeros ingresados son:"<<suma<<endl;

    return 0;
}
