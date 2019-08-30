

#include<iostream>
using namespace std;
int main() {
  int cant;
  cout<<"Ingrese Cantidad de alumnos ";
  cin>>cant;
  for(int i=1;i<=cant;i++){
    int PC1;
    int PC2;
    int PC3;
    int PC4;
    int P;
    int E1;
    int E2;
    double prom;
    cout<<"Alumno número"<<i<<"\n";
    cout<<"Practica 1 ";
    cin>>PC1;
    cout<<"Practica 2 ";
    cin>>PC2;
    cout<<"Practica 3 ";
    cin>>PC3;
    cout<<"Practica 4 ";
    cin>>PC4;
    cout<<"Proyecto ";
    cin>>P;
    cout<<"Examen 1 ";
    cin>>E1;
    cout<<"Examen 2 ";
    cin>>E2;
    prom=0.05*PC1+0.1*PC2+0.1*PC2+0.1*PC3+0.15*PC4+0.2*P+0.2*E1+0.2*E2;
    cout<<"Su promedio es"<<prom<<"\n";
    if(prom>=18&prom<=20){
      cout<<"Ud asistira a ACM-ICPC  International Collage Programing Contest";
    }
    else if(prom>=15&prom<=17.99){
      cout<<"Ud asistira a Imagine Cup";
    }
    else if(prom>=12&prom<=14.99){
      cout<<"Ud asistira a Hackaton Miraflores";
    }
    else cout<<"Ud necesita mejorar";
  }

    return 0;
}
