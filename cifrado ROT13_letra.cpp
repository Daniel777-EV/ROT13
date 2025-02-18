#include <iostream>
using namespace std;

int main() {
    // Declarar la variable para almacenar la letra ingresada
    char letra;

    // Solicitar al usuario que ingrese una letra
    cout << "Ingrese una letra (A - Z): ";
    cin >> letra;

    // Convertir la letra a mayúscula para manejar minúsculas
    letra = toupper(letra);

    // Variable para almacenar la letra cifrada
    char letraCifrada;

    // Validar que la entrada sea una letra del alfabeto (A-Z)
    if (letra < 'A' || letra > 'Z') {
        cout << letra << " no se encuentra en el esquema de codificación ROT13." << endl;
        return 1; // Terminar el programa con un código de error
    }

    // Usar una instrucción switch para aplicar ROT13
    switch (letra) {
        case 'A': letraCifrada = 'N'; break;
        case 'B': letraCifrada = 'O'; break;
        case 'C': letraCifrada = 'P'; break;
        case 'D': letraCifrada = 'Q'; break;
        case 'E': letraCifrada = 'R'; break;
        case 'F': letraCifrada = 'S'; break;
        case 'G': letraCifrada = 'T'; break;
        case 'H': letraCifrada = 'U'; break;
        case 'I': letraCifrada = 'V'; break;
        case 'J': letraCifrada = 'W'; break;
        case 'K': letraCifrada = 'X'; break;
        case 'L': letraCifrada = 'Y'; break;
        case 'M': letraCifrada = 'Z'; break;
        case 'N': letraCifrada = 'A'; break;
        case 'O': letraCifrada = 'B'; break;
        case 'P': letraCifrada = 'C'; break;
        case 'Q': letraCifrada = 'D'; break;
        case 'R': letraCifrada = 'E'; break;
        case 'S': letraCifrada = 'F'; break;
        case 'T': letraCifrada = 'G'; break;
        case 'U': letraCifrada = 'H'; break;
        case 'V': letraCifrada = 'I'; break;
        case 'W': letraCifrada = 'J'; break;
        case 'X': letraCifrada = 'K'; break;
        case 'Y': letraCifrada = 'L'; break;
        case 'Z': letraCifrada = 'M'; break;
    }

    // Mostrar la letra cifrada
    cout << "La letra cifrada en ROT13 es: " << letraCifrada << endl;

    return 0;
}
