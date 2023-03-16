/*Ejercicio 2. 
La función que se ilustra a continuación calcula el promedio de los elementos de un arreglo de tamaño n.
promedio y suma apuntan a variables que la función modifica por referencia. Desafortunadamente, la función
contiene errores; encuéntralos y corrígelos, de tal manera que su operación sea correcta.
Implemente un caso de prueba para la función anterior, que le permita verificar su correcto funcionamiento.*/

#include <iostream>

using namespace std;

void fun_c(double *a, int n, double *promedio, double *suma);

int main()
{
    double arreglo[10]={10,1,2,3,4,5,6,7,8,9};
    double a=0,b=0;
    double *promedio=&a;
    double *suma=&b;

    fun_c(arreglo,10,promedio,suma);
    cout<<endl<<"EL promedio del arreglo es: "<<*promedio<<endl;
    return 0;
}

// función con los errores corregidos
void fun_c(double *a, int n, double *promedio, double *suma){
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++)
    *suma += *(a + i);
    *promedio = *suma / n;
}