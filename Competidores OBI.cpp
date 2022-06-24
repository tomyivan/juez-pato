#include "bits/stdc++.h"
using namespace std;
int T;
string num;
char PR[5]={'2','3','5','7'};
bool veri(string n){
	int c=0,con,sum=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<num.size();j++){
			if(PR[i]==num[j]){
				c++;
				stringstream ss;
				ss<<num[j];
				ss>>con;
				sum=sum+con;
			}
		}
	}
	if(sum%2==0 and c>=3){
		return true;
	}
	return false;
}
int main()
{	
	int con = 0;
	cin>>T;
	for (int i = 0; i < T; ++i)
	{
		cin>>num;
		if(veri(num)){
			con++;
		}

	}
	cout<<con<<endl;
	return 0;
}
