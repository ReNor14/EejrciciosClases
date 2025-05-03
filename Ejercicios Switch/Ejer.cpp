#include <iostream>
using namespace std;

int main(){
/* Pide un número del 1 al 7 e imprime 
el día de la semana correspondiente 
(1 = Lunes, 2 = Martes, etc.)*/

int num;

cout<< "Ingrese un numero porfavor:";
cin>> num;

switch (num){

    case 1: 
    cout<< "lunes\n";
    break;
    case 2:
    cout<<"marte\n";
    break;
    case 3:
    cout<<"miecoles"; 
    break;
    case 4:
    cout<< "jueves";
    break;
    case 5: 
    cout<< "viernes";
    break;
    case 6: 
    cout<< "sabado";
    break;
    case 7:
    cout<< "domingo";
    break;

    default : 
    cout<< "vuelve a intentarlo";
    break;

return 0;
}



}