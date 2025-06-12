#include <iostream>
using namespace std;
int main (){

    int Number=0;
    int Tabla;

    cout<<"Bienvenido\n";
    cout<< "Por favor ingresa un numero para ver su tabla de multiplicar:";
    cin>> Number;
    cout<<"La tabla de multiplicar del numero " << Number <<" es:"<<endl;

    for(int i=1; i<=10; i++){ 
       cout<<Number<<" X "<<i<< " = "<< Number*i<<endl;
    }
    return 0;
}