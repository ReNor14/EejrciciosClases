#include <iostream>
using namespace std;

int main (){
    
    int Arrayan[]={1,2,3,4,5};
    int Naguara = sizeof(Arrayan)/ sizeof(Arrayan[0]);
    for ( int i= Naguara - 1; i >= 0; i--){
        
        cout<<Arrayan[i] <<" ";
    }
cout<<endl;
    return 0;
}