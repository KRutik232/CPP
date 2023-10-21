#include<iostream>
using namespace std;
int main()
{
	char *str;
	str=new char[10];
	cout<<" Accept string ";
	cin>>str;
	cout<<str;
	delete[] str;
	cout<<str;
}
