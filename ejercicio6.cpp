#include <iostream>
#include<math.h>
using namespace std;
int main() {
int numero;
cin>>numero;
for (int j=0; j<numero; ++j) {
      for (int i=0; i<numero ; ++i) {
     if (j%2==0){cout<<"#";
       if(i>0&i%2!=0){cout<<"@";}
       else cout<<"@";
       }
     else {cout<<"@";
     if (i>0&i%2==0){cout<<"#";}
     else cout<<"#";
     }
}
cout << endl;
}
}
