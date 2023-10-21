#include<iostream>
using namespace std;
float division (int x, int y)
{
if (y==0)
throw "Attemped division by 0. Not allowed.";
return (x/y);
}
int main()
{
	int i;
	int j=0;
	float k;
	try{
		cout<<"Enter a number\n";
		cin>>i;
		cout<<"Enter the value of divisor\n";
		cin>>j;
		k=division(i,j);
		cout<<k<<endl;
	}
	catch(const char*e){
	
	cout<<e<<endl;
}
}
