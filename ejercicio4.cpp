#include <iostream>
using namespace std;

float calcseguro(char tipo,int cantidad){
  float pago;
  switch(tipo){
    case"A":case"a":
    if(cant<=8) pago=40;
    else pago=(40+((cantidad-8)*7));
    break;
    case"B":case"b":
    if(cant<=6) pago=30;
    else precio=(30+((cantidad-6)*7));
    break;
    case"C":case"c":
    if(cant<=4) pago=20;
    else precio=(20+((cantidad-4)*3));
    break;
    case"D":case"d":
    if(cant<=2) pago=10;
    else precio=(10+((cantidad-2)*3));
    break;
  }
  return pago;
}

int main(){
  char tipo;
  int cantidad;
  cout<<"Tipo de seguro : ";
  cin>>tipo;
  cout<<"Cantidad asegurados : ";
  cin>>cantidad;
  float pago=calcseguro(tipo,cantidad);
  cout<<"Monto mensual : "
}
