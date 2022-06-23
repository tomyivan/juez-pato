#include "bits/stdc++.h"
using namespace std;
int T;
int V[100+5];

int repetidos(int x){
	int c=0;
	for(int i=0;i<T;i++){
		if(V[i]==x){
			c++;
		}
	}
	return c;
}
int main()
{	
	while(cin>>T){
		std::vector<int> v;
		for(int i=0;i<T;i++){
			cin>>V[i];				
		}	
		for(int i=0;i<T;i++){
			v.push_back(repetidos(V[i]));
			
		}
		cout<<*max_element(v.begin(), v.end())<<endl;
	}
	
	return 0;
}
