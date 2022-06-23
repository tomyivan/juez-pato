#include "bits/stdc++.h"
using namespace std;
string Z;
int D;
int max(string Z){
	int x=0,aux;
	for(int i=0;i<Z.size();i++){
			stringstream ss; //convertir de str a int
			ss<<Z[i];
			ss>>aux;
		if(x<aux){
			x = aux;
		}
	}
	return x;
}
int main()
{	
	while(cin>>Z>>D){
	int x = max(Z);
	if (D!=x){
		for(int i=0;i<Z.size();i++){
			if(Z[i]==D+'0'){
				Z[i]=x+'0'; //convertir de int a chr
			}
		}
		cout<<Z<<endl;
	}
	else{
		string aux = Z;
		char y[100];
		sort(Z.begin(), Z.end());
		for(int i=Z.size()-1;i>=0;i--){
			if(x+'0'!=Z[i]){
				y[0] = Z[i];
				break;
			}
		}
		for(int i=0;i<Z.size();i++){
			if(aux[i]==D+'0'){
			aux[i]=y[0];}
		}
		cout<<aux<<endl;
	}
	}
		return 0;
}
