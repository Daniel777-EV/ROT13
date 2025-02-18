#include <iostream>
#include <string> // Para manejar cadenas de texto
using namespace std;

int main() {
    // Declarar la variable para almacenar la palabra ingresada
    string palabra;

    // Solicitar al usuario que ingrese una palabra
    cout << "Ingrese una palabra (solo letras A-Z): ";
    cin >> palabra;

    // Variable para almacenar la palabra cifrada
    string palabraCifrada = "";

    // Iterar sobre cada carácter de la palabra
    for (char letra : palabra) {
        // Convertir la letra a mayúscula para manejar minúsculas
        letra = toupper(letra);

        // Validar que la letra esté en el rango A-Z
        if (letra < 'A' || letra > 'Z') {
            cout << "Error: La palabra debe contener solo letras (A-Z)." << endl;
            return 1; // Terminar el programa con un código de error
        }

        // Aplicar ROT13 usando aritmética en lugar de switch
        char letraCifrada;
        if (letra >= 'A' && letra <= 'M') {
            letraCifrada = letra + 13; // Letras A-M se rotan 13 posiciones hacia adelante
        } else if (letra >= 'N' && letra <= 'Z') {
            letraCifrada = letra - 13; // Letras N-Z se rotan 13 posiciones hacia atrás
        }

        // Agregar la letra cifrada a la palabra cifrada
        palabraCifrada += letraCifrada;
    }

    // Mostrar la palabra cifrada
    cout << "La palabra cifrada en ROT13 es: " << palabraCifrada << endl;

    return 0;
}
