//https://practice.geeksforgeeks.org/problems/maximum-possible-sum-of-products/0
//O(nlogn) solution

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t>0)
	{
	int n;
	cin>>n;
	int arr[n];
	int a[n];
  
	for(int i=0;i<n;i++)  //input
		cin>>arr[i];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(arr,arr+n);      //sort
	sort(a,a+n);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i]*a[i];   //multiplying max of both arrays gives max number
	}
	
	cout<<sum<<endl;
			
	
	t--;
		
	}


	// your code goes here
	return 0;
}
