#include <iostream>
using namespace std;

int main(){
    int n,maxi=0;
    do{
        cout<<"Ingrese n: ";
        cin>>n;
        if(n>maxi) maxi=n;
    }while(n!=0);
    cout<<"El valor máximo es: "<<maxi<<endl;
}
