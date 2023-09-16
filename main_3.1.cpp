#include <iostream>
using namespace std;

int main() {
  const double CM_A_PULGADA = 0.393701;
  double centimetros;
  
  cout << "Ingrese el número de centímetros: ";
  cin >> centimetros;
  
  double pulgadas = centimetros * CM_A_PULGADA;
  
  cout << centimetros << " centímetros son " << pulgadas << " pulgadas." << endl;
  
  return 0;
}
