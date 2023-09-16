#include <iostream>
using namespace std;

int main() {
  int numero;
  
  for (numero = 1; numero <= 20; numero++) {
   
    if (numero % 3 == 0) {
     
      cout << numero << " es múltiplo de 3." << endl;
    }
  }
  
  return 0;
}
