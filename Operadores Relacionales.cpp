#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;
const ll mod = 1e9 + 7;  
void operaciones(int a,int b){
    if(a<b){
        cout<<"<"<<endl;
    }
    else if (a>b){
        cout<<">"<<endl;
    }
    else
    {
        cout<<"="<<endl;
    }
}
int main(){
    int a,b,t;
    cin >>t;
    for(int i=1;i<=t;i++){
        cin >>a >>b; 
        operaciones(a,b);
    }
    
    return 0;
}
