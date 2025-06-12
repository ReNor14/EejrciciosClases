#include <iostream>
using namespace std;

int main (){

    int numero, suma=0;

    cout<<"Bienvenido \n";
    cout<<"Por favor Ingresa un numero:";
    cin>> numero;

    for(int i= 1; i<=numero; i++){

        suma += i;
    }
    cout<< "La suma de los numeros es:"<<suma<<endl;
   
    return 0;
}