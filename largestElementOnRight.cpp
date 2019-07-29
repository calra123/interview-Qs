//https://www.geeksforgeeks.org/replace-every-element-with-the-greatest-on-right-side/

//O(n) solution 

#include <iostream>
using namespace std;

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main() {
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int a[n];
	
	a[n-1]=-1;
	
	for(int i=n-2;i>=0;i--)
	{
		a[i]=max(arr[i+1],a[i+1]);      //Start on the rightmost side and move left looking for the maximum at each point
	}
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	// your code goes here
	return 0;
}
