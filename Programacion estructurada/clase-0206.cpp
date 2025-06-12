#include <iostream>

using namespace std;

int mayorDeTres(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

bool esPar (int n){
    return n % 2 == 0;
}

int main(){

 int x, y, z;
 cout<< "Ingrese tres numeros"<<endl;
 cin>> x >> y>> z;
 
    cout << "El mayor de los tres es: " <<mayorDeTres(x, y, z)<<endl;
    if (x > y && x > z){  
       return x; 
    }else if(y > z){
       return y;
    }else{
        return z;
    }
    
    ;
    return 0;
}