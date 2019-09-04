#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double N,xi,sum=0,sumcuadra=0,desvestand;
  cout<<"N:";
  cin>>N;
  int most=1;
  for(int i=0;i<N;i++){
    
    cout<<"elemento"<<most<<":";
    cin>>xi;
    sum+=xi;
    sumcuadra+=pow(xi,2);
    most++;

  }
  desvestand=sqrt((sumcuadra/N)-(pow(sum/N,2)));
  cout<<"sd:"<<setprecision(3)<<desvestand<<"\n";
}
