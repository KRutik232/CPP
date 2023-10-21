#include<iostream>
using namespace std;
int main()
{
	int a,b,temp=0;
	cout<<"Accept two nos "<<endl;
	cin>>a>>b;
	cout<<"Before swapping two no are :- "<<a<<" "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping two no are :- "<<a<<" "<<b<<endl;	
}
