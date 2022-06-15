#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
typedef long long ll;
int V[1000];
int buscar(int n){
    int x = V[0];
    int con=0,cont=0;
    for(int i=0;i<n;i++){
        if(x!=V[i]){  
            con=i;
        }
        else{
            cont++;
        }
        
    }
    if(cont==1){
        con=0;
    }
    return con;
}
int main(){
    int n,t;
    
    cin >>t;
    for(int i=1;i<=t;i++){
        cin >>n;
        for(int j =0;j<n;j++){
            cin >>V[j];
        }
        cout<<buscar(n)<<endl;

    }
}
