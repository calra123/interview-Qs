//https://www.geeksforgeeks.org/find-the-nearest-smaller-numbers-on-left-side-in-an-array/
//O(n) 
//Stack used
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

stack<int> s;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=0;i<n;i++)
	{
		
		
	
		while( !s.empty() && s.top()>arr[i] )
		{
			s.pop();
		}
			
		if(s.empty())
			cout<<"_"<<" ";
		else
			cout<<s.top()<<" ";
			
	
		s.push(arr[i]);
		
	}
	cout<<endl;
	
	// your code goes here
	return 0;
}
