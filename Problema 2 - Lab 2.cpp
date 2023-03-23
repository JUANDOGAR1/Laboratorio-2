/*Problema 2. 
Haga una función que compare 2 cadenas de caracteres y retorno un valor lógico verdadero si son
iguales y falso en caso contrario, no olvide también tener en cuenta la longitud de las cadenas. Escriba un programa
de prueba.*/
#include <iostream>

using namespace std;

bool compararCadenas(char cadena1[], char cadena2[], int len1, int len2);

int main()
{
    char cadena1[]="cadena1", cadena2[]="cadena1";
    int len1=7, len2=7;
    compararCadenas(cadena1, cadena2, len1, len2);

    return 0;
}

bool compararCadenas(char cadena1[], char cadena2[], int len1, int len2){

    bool valor=true;
    
    if (len1==len2){
        for (int i=0; i<len1;i++){
            if (cadena1[i]!=cadena2[i]){
                valor=false;
            }
            else{
                valor=true;
            }
        }
        if (valor==true){
            cout<<'"'<<cadena1<<'"'<<" y "<<'"'<<cadena2<<'"'<<" son cadenas iguales."<<endl;
        }
        else{
            cout<<"Las cadenas son diferentes"<<endl;
        }
    }
    else{
        valor=false;
        cout<<"Las cadenas son diferentes"<<endl; 
    }
    return valor;
}
        