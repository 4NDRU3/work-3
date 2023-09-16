#include <iostream>
using namespace std;

int main() {
  int hijos, escolares;
  bool viuda;
  
  double subsidio = 0;
  
  cout << "Ingrese el número de hijos: ";
  cin >> hijos;
  
  cout << "Ingrese el número de hijos en edad escolar: ";
  cin >> escolares;
  
  cout << "Ingrese si la madre es viuda (1: si, 0: no): ";
  cin >> viuda;
  
  if (hijos < 0 || escolares < 0 || escolares > hijos || viuda <= 0 || viuda >= 1) {
    cout << "Datos inválidos" << endl;
    return -1; // Terminar el programa con un código de error
  }
  
  // Calcular el subsidio 
  if (hijos <= 2) {
    subsidio = 70;
  }
  else if (hijos <= 5) {
    subsidio = 90;
  }
  else {
    subsidio = 120;
  }
  
  //subsidio por cada hijo en edad escolar
  subsidio += escolares * 10;
  
  //subsidio si la madre es viuda
  if (viuda) {
    subsidio += 20;
  }
  

  cout << "El monto mensual del subsidio familiar es: S/. " << subsidio << endl;
  
  return 0; 
}
