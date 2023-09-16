#include <iostream>
using namespace std;

int main() {
  int let[] = {50, 55, 57, 58, 60};
  
  int t = 174;
 
  int n = 3;
  
  int max_suma = 0;
  
  int i1, i2, i3;
  
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        // Calcular la suma de las distancias de las tres ciudades
        int suma = let[i] + let[j] + let[k];
        // Verificar si la suma es menor o igual al límite y mayor que la suma máxima actual
        if (suma <= t && suma > max_suma) {

          max_suma = suma;
          i1 = i;
          i2 = j;
          i3 = k;
        }
      }
    }
  }
  

  cout << "Las distancias elegidas son: " << let[i1] << ", " << let[i2] << " y " << let[i3] << endl;
  cout << "La suma de las distancias es: " << max_suma << endl;
  
  return 0; 
}

