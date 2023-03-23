/*Problema 7. 
Escribir un programa que reciba un número n y lea una cadena de caracteres numéricos, el programa
debe separar la cadena de caracteres en números de n cifras, sumarlos e imprimir el resultado. En caso de no poderse
dividir exactamente en números de n cifras se colocan ceros a la izquierda del primer número.
Ejemplo: Si n=3 y se lee el arreglo 87512395 la suma seria 087+512+395=994.
Nota: la salida del programa debe ser:
Original: 87512395.
Suma: 994.*/

#include <iostream>

using namespace std;

int main() {
    int n;
    char cadena[1000];

    // Leer el número n y la cadena de caracteres
    cout << "Ingrese el número n: ";
    cin >> n;
    cout << "Ingrese la cadena de caracteres numéricos: ";
    cin >> cadena;

    // Completar con ceros a la izquierda si es necesario
    int longitud = 0;
    while (cadena[longitud] != '\0') {
        longitud++;
    }
    int sobrante = longitud % n;
    if (sobrante != 0) {
        int cantidad_ceros = n - sobrante;
        for (int i = longitud; i >= 0; i--) {
            cadena[i+cantidad_ceros] = cadena[i];
        }
        for (int i = 0; i < cantidad_ceros; i++) {
            cadena[i] = '0';
        }
        longitud += cantidad_ceros;
    }

    // Separar la cadena en números de n cifras y sumarlos
    int suma = 0;
    for (int i = 0; i < longitud; i += n) {
        int numero = 0;
        for (int j = 0; j < n; j++) {
            numero = numero * 10 + (cadena[i+j] - '0');
        }
        suma += numero;
    }

    // Imprimir el resultado
    cout << "La suma de los números de " << n << " cifras en la cadena es: " << suma << endl;

    return 0;
}
