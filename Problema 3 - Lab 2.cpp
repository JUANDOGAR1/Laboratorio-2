/*Problema 3. 
Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número entero
y retorne dicho número. Escriba un programa de prueba.
Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.*/

#include <iostream>

using namespace std;

int conversorInt(char *cadena);

int main() {
    char cadena[] = "123";
    int valor = conversorInt(cadena);
    cout << valor << endl;
    return 0;
}

int conversorInt(char *cadena) {
    int valor = 0;
    int i = 0;
    for (int i=0; cadena[i] != '\0'; i++) {
        valor = valor * 10 + (cadena[i] - '0');
    }
    return valor;
}