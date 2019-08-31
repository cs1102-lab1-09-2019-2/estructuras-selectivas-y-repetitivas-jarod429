#include <iostream>
#include<vector>
using namespace std;
vector<int>v;
int main() {
  int elementos,mayor=0;
  cout<<"n:";
  cin>>elementos;
  for(int i=0;i<elementos;i++){
    int elemento;
    cin>>elemento;
    v.push_back(elemento);
  }
  for(int j=0;j<elementos;++j)
  if (v[j]>mayor){
    mayor=v[j];
  }
  cout<<"El máximo valor es "<<mayor;
}
