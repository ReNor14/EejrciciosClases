#include <iostream>
#include <cmath>
// **Número Más Cercano a 100**Solicita dos números y muestra cuál de ellos está más cerca de 100.
using namespace std;

int number1, number2;

int main (){

    int number1, number2;

    cout<< "Please, enter your first number: ";
    cin>> number1;
    cout<< "Please, enter your second number: ";
    cin>> number2;
     
    int Rango1 = abs(number1 - 100);
    int Rango2 = abs(number2 - 100);

    if (Rango1 < 100)
    {
        cout<< number1;
        cout<<"-----";
        cout<< "Your first number are more close to 100 than your second number";
    }
    else
    {
        cout<< number2;
        cout<<"-----";
        cout<< "Your second number are more close to 100 than your first number";
    }
return 0;

}