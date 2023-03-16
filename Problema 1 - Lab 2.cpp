#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializo semilla aleatoria usando reloj del sistema como argumento
    
    string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char arreglo[200];
    int contadores[26] = {0}; // Inicializo contadores a cero
    
    for (int i = 0; i < 200; i++) {
        int indice = rand() % letras.size(); // Genera índice aleatorio
        char letra = letras[indice];
        arreglo[i] = letra;
        contadores[letra - 'A']++;
    }
    
    for (int j = 0; j < 200; j++) {
        cout << arreglo[j];
    }
    
    cout << endl;
    
    for (int k = 0; k < 26; k++) {
        cout << (char)('A' + k) << ": " << contadores[k] << endl;
    }
    
    return 0;
}
