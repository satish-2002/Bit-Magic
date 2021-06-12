//cpp prpogram to check whether bit is nset or un-set at specified positiuon
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos;
	cout<<"Enter number u want to check:";
	cin>>num;
	cout<<"Enter the position to check the bit set or not:";
	cin>>pos;
	if(num&(1<<(pos-1)))
		cout<<"SET";
	else
		cout<<"UNSET";
}

