#include<iostream>
using namespace std;
 template <class T>
 T swap_(T &a, T&b)
 {
 	
	T temp=a;
 	a=b;
 	b=temp;
 	cout<<"After swapping numbers are:\n"<<a<<" "<<b<<endl;
 }
 int main()
 {
 	int i=5;
 	int j=6;
 //	int t=0;
 	cout<<"Before swapping numbers are:\n"<<i<<" "<<j<<endl;
 	swap_(i,j);
 		cout<<"After swapping numbers are:\n"<<i<<" "<<j<<endl;
 	
 }
