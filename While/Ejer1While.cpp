#include <iostream>
using namespace std;

int main (){

int verificator;
int user, password= 280525;

cout<<"------------Bienvenido------------\n";
cout<<"Por favor ingresa tus credenciales\n";
cout<<"User:";
cin>> user;
cout<<"contrasena:";
cin>> verificator;

while (verificator != password){
    if (verificator = password){
        cout<< "Acontraseña incorrecta.\n";
    }else{
    cout<< "A ingresado correctamente.\n";}
}
cin>> verificator;
    return 0;
}