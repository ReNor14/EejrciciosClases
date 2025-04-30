#include <iostream>
using namespace std;
/* Calculadora de Tarifa de Envío** Pide el peso de un paquete
 y cobra $5 si pesa hasta 5kg, $10 si pesa entre 6kg y 10kg,
 y $15 si pesa más de 10kg. */

int pesoP;

int main(){

    cout<< "Please enter the weight of your package: ";
    cin>> pesoP;

    if (pesoP >0 && pesoP <= 5 ){

        cout<< "Your total to pay is $5";
    }else if (pesoP >= 6 && pesoP <= 10){

        cout<< "Your total to pay is $10";
    
    }else if (pesoP >= 9 ){ 

        cout<<"Your total to pay is $15";

    }else{

        cout<< "please enter a valid weight";
    }

    cout<< "\n Thanks";

return 0;

}
