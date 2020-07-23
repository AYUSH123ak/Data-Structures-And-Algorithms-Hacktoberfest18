//program to count the set bits
#include<iostream>
using namespace std;

int main()
{
	int t;
	cout<<"Enter the number of test cases"<<" ";
	cin>>t;
	while(t--)
	{
		int n;
		cout<<"Enter the number do you want"<<endl;
		cin>>n;
		int count=0;
		while(n!=0)
		{
			if(n&1==1)
			{
				count++;
			}
			n=n>>1;
		}
		cout<<"The number of set bits:"<<" ";
		cout<<count<<endl;
	}
	return 0;
}
