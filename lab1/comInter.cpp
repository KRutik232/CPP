#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	float CI,Price,interest,timePeriod,n=1;
	cout<<"Interest : "<<endl;
	cin>>interest;
	cout<<"Price :"<<endl;
	cin>>Price;
	cout<<"Time period :"<<endl;
	cin>>timePeriod;
	
	for(int i=1;i<=timePeriod;i++)
	{
		n*=(1+(interest/100));
	}
	CI=Price*n;
	cout<<"Compound interest is : "<<CI;
}
