#include <iostream>
using namespace std;

int main (){

/*Sistema de Puntuación de Videojuegos*  
Pide el puntaje de un jugador (1-5 estrellas)
 y muestra un mensaje acorde a su desempeño.*/

 int score;
 cout<< "Welcome player!\n";
 cout<< "Enter your score:\n";
 cin>> score;

 switch (score){
    case 1: 
    cout<< "What the hell's wrong with you!\n";
    break;
    case 2: 
    cout<< "You're a loser!\n";
    break;
    case 3:
    cout<< "Not bad at all...\n";
    break;
    case 4:
    cout<< "Hey! keep it up!\n";
    break;
    case 5:
    cout<< "Congratulations, you did it!\n";
    break;
    default:
    cout<< "Check your score and try again.";
    break;
 }

    return 0;
}