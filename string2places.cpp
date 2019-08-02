//https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places/

#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
	
	int t;
	cin>>t;
	while(t>0){
	string a;
	cin>>a;
	
	string s=a;
	
	string b;
	cin>>b;
	string s1,s2;
	string temp;
	char c=s[0];
	temp=s[0];
	c=s[1];
	temp+=c;
//	cout<<temp;
	
	s1=s.erase(0,2)+temp;
	s=a;
//	cout<<s;
	int len=s.size();
//	cout<<len<<endl;
	string temp2;
	c=s[len-2];
	temp2=c;
	c=s[len-1];
	temp2+=c;
	s=a;
	s2=temp2+s.erase(len-2,2);
	//cout<<s1<<" "<<s2<<" "<<temp<<" "<<temp2<<" ";
	if(b==s1 || b==s2)
		cout<<"1";
	else
		cout<<"0";
	
	cout<<endl;
	t--;
	}
	// your code goes here
	return 0;
}
