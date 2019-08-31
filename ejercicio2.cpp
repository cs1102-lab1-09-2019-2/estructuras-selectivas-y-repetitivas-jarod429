#include<iostream>
using namespace std;
int main() {
  int n ;
  cout<<"ingrese un numero ";
  cin>>n;
  for (int j=0; j<n; ++j) {
      for (int i=0; i<n ; ++i) {
        if(j>0&i>0&i<n-1&j<n-1&i!=j)
        cout<<" ";
        else cout<<"*";

      }
      cout << endl;
   }

    return 0;
}
