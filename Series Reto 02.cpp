#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;
const ll mod = 1e9 + 7;  
int main(){
    int a,t,aux,c,c1;
    cin >>t;
    for(int i=1;i<=t;i++){
        cin >>a ;
        c=0;
        c1=-1;
        aux=1;
        for(int j=0;j<a;j++){
            if(j%2==0){
                c=c1;                
                c1=aux;
                aux = c+c1;
                cout<<aux<<" ";
            }
            else{
                cout <<aux<<" ";
            }
        }
        cout <<endl;
    }
    
    return 0;
}
