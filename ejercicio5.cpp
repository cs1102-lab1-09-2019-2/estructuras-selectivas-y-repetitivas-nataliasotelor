#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



double CalcularDesviacion (){
  float desviacion;
  float A;
  float B;
  int i=1;
  float sumadecuadrados = 0;
  float suma = 0;
  int x;
  
  for(i=0; i<N+1 ; i++){
    cout<<"x"<<i<<":"
    cin>>x;

    }

  for (x=0; <N+1 ; i++){
    
        sumadecuadrados = (sumadecuadrados + pow(i, 2));
        suma = (suma + i);
    

  A = (1/n) * (sumadecuadrados-1);
  B = pow((1/n) * (suma-1), 2);  
  desviacion = sqrt(A - B);
  std::cout << std::setprecision(3) << desviacion;return 0;


}


int main() {
    float N;
    cout<<"N: ";
    cin >> N;


