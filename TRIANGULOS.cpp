#include "bits/stdc++.h"
using namespace std;
int T;
typedef long long ll;
vector<int> v(1e6+5,0);
int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
void combi(){
	for(int i=1;i<=T;i++){
		v[i]=i;
	}
}
int main()
{	
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll comb;
	cin>>T;
	combi();
	comb =  (v[T]*v[T-1]*v[T-2])/ (fact(3));
   	cout << comb<<endl;
	return 0;
}
