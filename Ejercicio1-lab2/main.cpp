#include <iostream>
using namespace std;
void fun_a(int *px, int *py);
void fun_b(int a[], int tam);
int main()
{
    int *ptr;
    int array[10] = {0,1,2,3,4,5,6,7,8,9};

    ptr=array;

    cout<<"Direccion de memoria del arrerglo: "<<ptr<<endl;
    cout<<"Al ser un arreglo de tipo entero (int), se destinan 4 bytes para cada elemento del array"<<endl;
    cout<<"Direccion de memoria del elemento en la posicion 1 del arreglo: " <<(ptr+1) <<endl;
    cout<<"Podemos denotar que la diferencia entre los dos espacios de memoria es de 4 bytes"<<endl;
    cout<<"Valor de array[3]: "<< *(ptr+3) <<endl;
    cout<<"Direccion de array[3]: " << ptr+3 <<endl;
    cout<<"El efecto de la funcion fun_b sobre el arreglo es invertirlo."<<endl;

    fun_b(array, 10);
}
void fun_a(int *px, int *py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}
void fun_b(int a[], int tam){
    int f, l;
    int *b = a;
    for (f = 0, l = tam -1; f < l; f++, l--) {
        fun_a(&b[f], &b[l]);
    }
}
