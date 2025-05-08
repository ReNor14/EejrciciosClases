#include <iostream>
using namespace std;

int main (){

/*Se declaran las variables a utilizar*/
    int score;
    char letras;

    cout<< "-----Welcome!-----\n";
    cout<< "Enter your Score:";
    cin>> score;

    /*Se comienza con la sentencia If, en donde definimos 
    el rango que debe de tener la nota del alumno, segun 
    el sistema de calificacion americano y de ese modo 
    asignarle la nueva calificacion correspondiente*/
    if (score >=0 && score <= 69){
       letras= 'f';
    }else if (score >69 && score <=70){
        letras = 'e';
    }else if (score >70 && score <=80){
        letras= 'd';
    }else if( score >80 && score <= 85){
        letras = 'c';
    }else if(score >85 && score <= 90){
        letras = 'b';
    }else if (score <=90){
        letras = 'a';
    }else{
        cout<< "Check your score.\n";
        return 1;
    }
    
    /*Aca empezamos a utilizar Switch. Se imprimira en pantalla 
    la nota del alumno segun cumpla lo establecido en la
     sentencia If*/
   switch (letras){
        case 'a':  
        cout<<"You got an A\n";
        cout<< "Well done, that's a great score!";
        break;
        case 'b':
        cout<< "You got an B\n";
        cout<< "You were so close.";
        break;
        case 'c':
        cout<< "You got an C\n"; 
        cout<< "Excellent work, keep it up!";
        break;
        case 'd':
        cout<< "You got an D\n";
        cout<< "You could have done better.";
        break;
        case 'e':
        cout << "You got an E\n";
        cout << "Keep trying.";
        break;
        case 'f':
        cout << "You got an F\n";
        cout<< "what happend?";
        break;
        default:
        cout<< "Try again\n";
    }
    
    return 0;

   
}