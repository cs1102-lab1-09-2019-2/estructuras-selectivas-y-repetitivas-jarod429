#include <iostream>
#include<cmath>
using namespace std;
int digito(int dig){
  while(10>dig){
    dig=dig/10;
  }
  return dig;
}
int main() {
  int n,soat,aut,cit;
  do{
  cin>>n;}
  while(11111111>=n&n>=99999999);
 aut=n%100;
 soat=n%100000;
 cit=n%1000000;
 if(digito(soat)%2==0){cout<<"SOAT:Vigente";}
 else cout<<"SOAT:Vencido";
 if(digito(cit)%2==0){cout<<"CITV:Vigente";}
 else cout<<"CITV:Vencido";
 if(aut%3==0){cout<<"Autorización:Si";}
 else cout<<"Autorización:No";
}
