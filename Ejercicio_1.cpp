//2390: Ejercicio_1
#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
typedef long long ll;
//para ordenar dee manera decreciente
bool miComparacion(int num1, int num2) {
  if (num1 < num2) {
    return false;
  } else {
     return true;
  }
}
int main(int argc, char const *argv[])
{
    int a;
    string n;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>n;
        if(n.size()>2){
            sort(n.begin(), n.end(),miComparacion);
            cout<<n[0]<<' '<<n[1]<<' '<<n[2]<<endl;
        }
        else{
            cout<<"no hacer nada"<<endl;
        }
    }
    return 0;
}
