//https://www.geeksforgeeks.org/check-given-four-points-form-square/

//O(1)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float check_side(int x,int y,int x1,int y1)
{
	float ans= sqrt(pow(x-x1,2)+pow(y-y1,2));
	return ans;
}
int main() {
	int ans[2];
	int arr[4][2];
	for(int i=0;i<4;i++)
	cin>>arr[i][0]>>arr[i][1];
	int t=0;
	while(t<2)
	{
	float side[3];
	
	for(int i=1;i<4;i++)
	{
		side[i-1]=check_side(arr[0][0],arr[0][1],arr[i][0],arr[i][1]);
	}
	int pos=-1;
	int diaPos=-2;
	for(int i=1;i<3;i++)
	{
		if(side[0]==side[i])
		pos=i;
		else if(side[i]*side[i]==2*side[0]*side[0])
		diaPos=i;
		
		
	}
	
	int flag1=0,flag2=0;
	
	if(pos==-1)
	{
		if(side[1]==side[2])
		flag2=1;
		if(side[0]*side[0]==2*side[1]*side[1])
		flag1=1;
	}
	
	if(flag2 & flag1 || (pos!=-1 && diaPos!=-2))
	{
		ans[t]=1;
	}
	
	int temp1,temp2;
	temp1=arr[0][0];
	arr[0][0]=arr[1][0];
	arr[1][0]=temp1;
	temp2=arr[0][1];
	arr[0][1]=arr[1][1];
	arr[1][1]=temp2;
	
	
	t++;
	}
	
	if(ans[0]&ans[1])
	cout<<"Yes";
	else
	cout<<"No";
	// your code goes here
	return 0;
}
