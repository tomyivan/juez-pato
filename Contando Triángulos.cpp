#include "bits/stdc++.h"
using namespace std;
int T,B,A;
vector<int> v(1e6+5,0);
int triangulo(){
	return ((B+1)*(B+1+1)/2)*(A+1);
}
int main()
{	
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin>>T;
	for (int i = 0; i < T; i++)
	{
		cin>>B>>A;
		cout<<triangulo()<<endl;
		
	}
	return 0;
}
