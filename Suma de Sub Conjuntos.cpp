#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
typedef long long ll;
int V[1000];
int con=0;
void comb(int N,int K,int s){
    int sum=0;
    std::string bitmask(K,1);
    bitmask.resize(N,0);
     do {
        for (int i = 0; i < N; ++i) 
        {
            if (bitmask[i]) {
                sum=sum+V[i];
//              cout<<V[i]<<' ';
                }
        }
  //       cout<<sum<<endl;
        if(sum==s) {con++;}
        sum=0;

    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));

}
int main(int argc, char const *argv[])
{
    int s,n;
    while(cin>>s>>n){
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        for(int i=0;i<=n;i++){
            comb(n, i,s); 
        }
        cout<<con<<endl;
        con=0;
    }
    return 0;
}
