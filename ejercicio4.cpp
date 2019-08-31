#include<iostream>
#include<string>
using namespace std;
void mostrarMenu();
void mostrarMenu() {
    cout<<"Tipo de entrada\n";
    cout<<"  1.- Super vip   precio 212\n";
    cout<<"  2.- Vip         precio 170\n";
    cout<<"  3.- Preferencial precio 136 \n";
    cout<<"  4.- General     precio 59\n";
}
int main() {
  int opción;
  char  claro;
 do{ mostrarMenu();
 cout<<"Seleccione una opción: ";
 cin>> opción;}
 while(0>opción&opción>4);
 do{ 
   cout<<"Es cliente Claro<S,s,R,r>";
   cin>>claro;
   if(claro =='s'){break;}
   else if (claro =='r'){break;}
   else if(claro =='S'){break;}
   else if(claro =='R'){break;}}
  while(1==1);
 switch(opción){
   case 1 :
     switch(claro){
       case's':
       case'S':
       case'r':
       case'R':
       cout<<"Monto a pagar"<<212*0.8;
       break;
       default:
       cout<<"Monto a pagar"<<212;
       }
     break;
   case 2 :
   switch(claro){
       case's':
       case'S':
       case'r':
       case'R':
       cout<<"Monto a pagar"<<170*0.8;
       break;
       default:
       cout<<"Monto a pagar"<<170;
       }
     break;
   case 3 :
   switch(claro){
       case's':
       case'S':
       case'r':
       case'R':
       cout<<"Monto a pagar"<<136*0.8;
       break;
       default:
       cout<<"Monto a pagar"<<136;
       }
     break;
   
   case 4 :
   switch(claro){
       case's':
       case'S':
       case'r':
       case'R':
       cout<<"Monto a pagar"<<59*0.8;
       break;
       default:
       cout<<"Monto a pagar"<<59;
       }
     break;
   
 }
}
