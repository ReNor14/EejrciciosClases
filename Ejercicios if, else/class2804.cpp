#include <iostream>
using namespace std;
// **Día Laboral o Fin de Semana** Solicita un número del 1 al 7 y muestra si corresponde a un día laboral (lunes a viernes) o fin de semana (sábado y domingo)**.
int main (){
    
    char monday, tuesday, wenesday, thursday, friday, saturday, sunday;
   int number;
    cout<< "Please enter a number from 1 to 7: ";
    cin>> number;

    
    if (number == 1 )
    {

        cout<< "monday";
        cout<< "its your working day";

    }
    else if (number == 2){


        cout<< "tuesday";
        cout<< "     ";
        cout<< " tuesday is your working day";

    }
    else if ( number == 3){

        cout<< " wenesday";
        cout<<"     ";
        cout<< " wenesday is your working day";
    }
    else if ( number == 4){

        cout<< "thursday";
        cout<< "      ";
        cout<< "thursday is your working day";
    
    }
    else if (number == 5){

        cout<< "friday";
        cout<< "      ";
        cout<< "friday is your working day";
    
    }
    else if ( number == 6 ){

        cout<< "saturday";
        cout<< "       ";
        cout<< "saturday is your working day";

    }
    else if ( number == 7) {
        cout<< "Sunday";
        cout<< "        ";
        cout<< "Sunday is your working day";
    }
    else {

        cout<< "Data invalid";
    }


return 0;

}

