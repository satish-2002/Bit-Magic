//cpp program to set a bit at specified position
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	int num,pos,res;
	cout<<"Enter the number:";
	cin>>num;
	cout<<"Enter the position you want the bit set to 1:";
	cin>>pos;
	res=(num^(1<<(pos-1)));
	cout<<"The result after setting the bit:"<<res;
	return 0;
}



