#include <iostream>
using namespace std;
int main(){
  double medida;
  int n;
  cout<<"Ingresar n=";
  cin>>medida;
  for (int i=0;i<=(medida-1);i++){
    for (int i=0;i<=(medida-1);i+=1){
      n+=1;
      if((n%2)==0){
        cout<<"@";
      }else{
        cout<<"#";
      }
    }
    cout<<"\n";
  }

}
