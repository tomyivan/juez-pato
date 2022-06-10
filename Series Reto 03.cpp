#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;
const ll mod = 1e9 + 7;  
int main(){
    int a,t,c,b,aux;
    cin >>t;
    for(int i=1;i<=t;i++){
        cin >>a>>b;
        c=1;
        aux=1;
        while(c<=a){
            if(aux%2!=0){
                for(int j=1;j<=b;j++){
                    if(c<=a){
                        cout<<aux<<" ";
                    }c++;
            }
            }
            aux++;
            
        }
        cout <<endl;
    }
    
    return 0;
}
