// cpp program to count active bits in a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter a number:";
	cin>>num;
	while(num!=0)
	{
		if(num&1==1)
		count++;
		num>>=1;
	}
	cout<<"The number of active bits in a given number:"<<count;
}



