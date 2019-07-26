#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int dig=log2(n)+1;
	cout<<dig;
	int sumbits=0;
	for(int i=1;i<=dig;i++)
	{
		sumbits+= ((n+1)/int(pow(2,i)))*pow(2,i-1);
		
	}
	int exp=0;
	for(int i=1;i<=dig;i++)
	{
		exp= ((n+1)%int(pow(2,i)))-pow(2,i-1);
	
		if(exp>0)
			sumbits+=exp;
	
	
		
		
	
	}
	
	cout<<sumbits;
	// your code goes here
	return 0;
}
