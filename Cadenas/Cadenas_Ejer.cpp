#include <iostream>
#include <cstring>  /*Colocamos la libreria "cstring" para hacer uso de las funciones:
                        strcpy, strlen, strcmp.*/
using namespace std;

int main (){
char palabra[50], palabraC[50]; //Declaramos variables con la capacidad de 50

cout<< "Ingresa una Palabra:\n";
cin>> palabra;                  //Guardamos la palabra ingresada por el usuario en la variable "palabra"

/*Luego aca inicialazamos un FOR, donde la condicion es que el
integrador sea del tamoño de la longitud de la copia de la 
palabra ingrsada poor el usuario*/
strcpy (palabraC, palabra);     //Hacemos una copia de la palbra ingresada por el usuario en la varible "palabraC"
    int longitud = strlen(palabraC);
    for (int i = 0; i < longitud / 2; i++) {
        char temp = palabraC[i];
        palabraC[i] = palabraC[longitud - i - 1];
        palabraC[longitud - i - 1] = temp;
    }
    /*Aca comparamos las longitudes de la palabra ingrersada y la copia declarando una 
    nueva variable, y en esta guardamos la comparativa*/
    int palindromo = strcmp(palabra, palabraC);
    /*Incializamos un IF-ELSE, donde colocamos que la condicion es que la variable
    palindromo (la comparativa) sea igual a cero, ya que si es asi, la palabra es 
    la misma tanto al derocho como al reves*/
    if (palindromo == 0 ){
        cout<<"La palabra ingresada es palindromo\n";
    }else{
        cout<<"La palabra ingresada no es un palindromo\n";
    }
    return 0;
}