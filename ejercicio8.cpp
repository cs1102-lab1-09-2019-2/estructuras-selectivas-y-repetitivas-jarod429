#include <iostream>
#include<math.h>
using namespace std;
double max(int p,int t);
double max(int p,int t){
  int A,B;
  A=(p*3)/10;
  B=p-(p/250)*t;
  if (A>B){return A;}
  return B ;
  
}
int main() {
int a,b,c,d;
do{
cin>>a;
cin>>b;
cin>>c;
cin>>d;}
while(200>a||b>3500||0>c||d>180);
double ales=max(a,c);
double jas=max(b,d);
if(ales<jas){cout<<"Jasmin ";}
else if(jas<ales){cout<<"Alessia ";}
else cout<<"Empate";
}
