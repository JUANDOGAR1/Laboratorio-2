/*Problema 4. 
Haga una función que reciba un numero entero (int) y lo convierta a cadena de caracteres. Use
parámetros por referencia para retornar la cadena. Escriba un programa de prueba.
Ejemplo: si recibe un int con valor 123, la cadena que se retorne debe ser “123”..*/

#include <iostream>

using namespace std;

void entero_a_cadena(int valor, char* cadena);

int main() {
    int valor = 123;
    char cadena[20];
    entero_a_cadena(valor, cadena);
    cout << "El número " << valor << " se convierte en la cadena: " << cadena << endl;
    return 0;
}

void entero_a_cadena(int valor, char* cadena) {
    if (valor == 0) {
        cadena[0] = '0';
        cadena[1] = '\0';
        return;
    }

    int i=0;
    
    for (; valor > 0; valor /= 10) {
        cadena[i++] = (valor % 10) + '0';
    }

    // invertir la cadena de manera simetrica respecto al centro de la cadena.
    for (int j = 0; j < i / 2; j++) {
        char temp = cadena[j];
        cadena[j] = cadena[i - j - 1];
        cadena[i - j - 1] = temp;
    }

    cadena[i] = '\0';
}

/*Por ejemplo, si la cadena original es "abcdefg", y i es igual a 7 y j es igual a 0 
(es decir, aún no se ha invertido ningún carácter), entonces en la primera iteración del for se intercambiarán
los caracteres en las posiciones 0 y 7-0-1=6, es decir, los caracteres 'a' y 'g', obteniendo la cadena "gbcdefa".
En la segunda iteración, se intercambiarán los caracteres en las posiciones 1 y 7-1-1=5,
es decir, los caracteres 'b' y 'f', obteniendo la cadena "gfcdoba", y así sucesivamente.*/
