#include <iostream>
using namespace std;

int main (){

    int numero=0,suma=0;

    cout<<"Por favor ingresa un numero:";
    cin>> numero;

    for (int i= 1; i <numero;i++){
        if (i % 2 == 0){
            suma += i;
        }
        
    }
cout<<"La suma de los numero pares es:"<<suma<<endl;


    return 0;
}