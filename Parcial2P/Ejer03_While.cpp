#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    srand( time (NULL));
    int random_number = 1 + (rand()%100);
    int intento;

    cout<< "Bienvenido a adivina el numero\n";
    do
    {
        cout<<"ingrese un numero:";
        cin>> intento;
        if (intento < random_number){
            cout<<"El numero ingresado es menor al numero secreto\n";
        }else{
            cout<<"El numero ingresado es mayor al numero secreto\n";
        }
    } while (intento != random_number);
    cout<< "Felicidades, adivinaste el numero:"<<random_number<<endl;

    return 0;
}