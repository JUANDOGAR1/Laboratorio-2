#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    char arreglo[200];
    int contadores[26] = {0};
    srand(time(0)); // Inicializo semilla aleatoria usando reloj del sistema como argumento
    
    for (int i = 0; i < 200; i++) {
        int letra = rand() % 26;
        arreglo[i] = letra + 65;
        contadores[letra]++;
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