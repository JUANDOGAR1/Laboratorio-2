/*Ejercicio 3:  Se tiene la siguiente declaración e inicialización para el arreglo
->[b: unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}}]
Determine de acuerdo a lo ilustrado en la Figura 1 el valor correspondiente de las siguientes expresiones:
    -> b
    -> b+2
    -> *(b+2)
    -> *(b+2)+1
    -> *(*(b+2)+1)
    -> b[3][1]
    -> *b++  */

#include <iostream>
using namespace std;

int main()
{
    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};

    cout<<endl<<"-> b: "<<b<<endl;

    cout<<"b+2: "<<b+2<<endl;

    cout<<"*(b+2): "<<*(b+2)<<endl;

    cout<<"*(b+2)+1: "<<*(b+2)+1<<endl;

    cout<<"*(*(b+2)+1): "<<*(*(b+2)+1)<<endl;

    cout<<"&(b[3][1]): "<< &(b[3][1])<<endl;

    return 0;
}