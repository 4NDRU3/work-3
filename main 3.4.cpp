#include <iostream>
using namespace std;

int main() {

  double num1, num2;
  char operacion;
  
  
  cout << "Ingrese el primer número: ";
  cin >> num1;
  
  cout << "Ingrese el segundo número: ";
  cin >> num2;
  

  cout << "Elija una operación (s: suma, r: resta, m: multiplicación, d: división): ";
  cin >> operacion;
  
  
  double resultado;
  
 
  switch (operacion) {
    case 's': // Suma
      resultado = num1 + num2;
      cout << "La suma de " << num1 << " y " << num2 << " es " << resultado << endl;
      break;
    case 'r': // Resta
      resultado = num1 - num2;
      cout << "La resta de " << num1 << " y " << num2 << " es " << resultado << endl;
      break;
    case 'm': // Multiplicación
      resultado = num1 * num2;
      cout << "La multiplicación de " << num1 << " y " << num2 << " es " << resultado << endl;
      break;
    case 'd': // División
      if (num2 == 0) { /
        cout << "No se puede dividir por cero" << endl;
        return -1; // Terminar el programa con un código de error
      }
      else {
        resultado = num1 / num2;
        cout << "La división de " << num1 << " y " << num2 << " es " << resultado << endl;
        break;
      }
    default: 
      cout << "Operación inválida" << endl;
      return -1; // Terminar el programa con un código de error
  }
  
  return 0; 
}
