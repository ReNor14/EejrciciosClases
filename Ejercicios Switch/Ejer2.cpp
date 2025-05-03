#include <iostream>
#include <cmath>
using namespace std;

int main(){

/*Pide una opción (`1` = USD a EUR, `2` = USD a JPY, `3` = USD a GBP)
 y realiza la conversión.*/
 // Declaramos variables.
 double num,USD1, USD2, USD3;
 int opcion;

 /*Le asignamos valores a las variable. En este caso, a las variables USD se les
 asigno la cantidad ingresada por el usuario multiplicada por la tasa de cambio.*/
USD1= (num*0.88);
USD2= (num*142.87);
USD3= (num*0.75);

/*Menu para que el usuario elija la tasa de cambio que le gustaria aplicar a
sus USD*/
 cout<< "ingrese la cifra en USD a covertir:\n";
 cin>> num;

 cout<< "A que divisa le gustaria convertir sus USD?\n ";
 cout<<"";
 cout<< "Opcion 1.\n USD a EUR\n";
 cout<<"";
 cout<< "Opcion 2.\n USD a JPY\n";
 cout<<"";
 cout<< "Opcion 3.\n USD a GBP\n";
 cout<<"";
 cout<< "Ingrese el numero de opcion a realizar:\n";

 cin>> opcion;

 /*Aca se decide lo que se imprime en pantalla segun la 
 opcion que haya elejido el usurio. En caso de elejir la opcion 1,
 se imprimira el caso 1. En dado caso no elija una de las 3 opciones,
 se le pedira que ingrese una opcion valida*/
 switch (opcion){
    case 1:
    cout<< "Este es su cambio:\n"<<USD1<<" EUR";
    break;
    case 2:
    cout<< "Este es su cambio:\n"<<USD2<<" JYP";
    break;
    case 3:
    cout<< "Este es su cambio:\n  "<<USD3<<" GBP";
    break;
    default:
    cout<<"Ingrese una opcion valida.";
    break;
 }

    return 0;
}
