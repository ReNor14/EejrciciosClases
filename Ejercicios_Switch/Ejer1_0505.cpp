#include <iostream>
#include <cmath>
using namespace std;

int main (){
    /* Desarrolle un prog. en c++ que solicite al usuario ingresar su salrio mensual bruto: 
    . Descuentos obligatorios:
     ISSS: 3% con un tope maximo de $30 solo aplica hasta $100
     AFP :es el 7.25% del salario 
     Renta: Se calcula sobre el salario neto utilizando las siguentes tablas:*/
  double salarioB, isss, afp, isr, tramo1, tramo2, tramo3, tramo4;
  int  opciones;
cout<< "Bienvenido\n";
cout<< "Porfavor ingresa tu salrio base:\n";
cin>> salarioB;
if (salarioB > 0){ 
    cout<< "Su saldo actual es de:"<<salarioB<<endl;
}else{ 
    cout<< "Error, intentelo de nuevo.";
}
cout<<"-------MENU-------\n";
cout<<"|1. ISSS (3%)    |\n";
cout<<"|2. AFP (7%)     |\n";
cout<<"|3. ISR          |\n";
cout<<"|4. Salir        |\n";
cout<<"------------------\n";
cout<<"Ingrese que es lo que desea calcular:\n";
cin>>opciones;

isss= abs((salarioB * 0.003));
afp= abs((salarioB *0.0725));

 tramo2= salarioB * 0.1;
 tramo3= salarioB  * 0.2;
 tramo4= salarioB * 0.3;
 
 if (salarioB >0 && salarioB <=472.00){
    cout<< "usted esta excento de ISR";
    cin>> isr;
 } else if (salarioB >= 472.00 && salarioB <= 895.24){
    cout<< tramo2;
    cin>> isr;
}else if (salarioB>= 895.24 && salarioB <= 2038.10){
    cout<< tramo2;
    cin>> isr;
}else{
    cout<< tramo4;
    cin>>isr;
}

 switch (opciones){ 
    case 1: 
    cout<< isss<<"su saldo despues de deducciones ISSS\n";
    case 2:
    cout<< afp<< "su saldo despues de deducciones AFP'n";
    case 3:
    cout<< isr<< "su saldo despues de ISR\n";
    default: 
    cout<< "ingrese una opcion, porfavor.\n";
    break;
}

 if (salarioB >0 && salarioB <=472.00){
    cout<< "usted esta excento de ISR\n";
    cin>> isr;
} else if (salarioB >= 472.00 && salarioB <= 895.24){
    cout<< tramo2;
    cin>> isr;
}else if (salarioB>= 895.24 && salarioB <= 2038.10){
    cout<< tramo2;
    cin>> isr;
}else{
    cout<< tramo4;
    cin>>isr;
}

    return 0;
}