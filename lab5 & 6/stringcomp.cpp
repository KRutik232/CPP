#include<iostream>
using namespace std;
int main()
{
    string p1;
	string p2;

	cout << "Enter the String 1:\n";
    cin >> p1;
	cout << "Enter the String 2:\n";
	cin >> p2;

	if (p1 == p2)
		   cout << "Strings are equal" << std::endl;
	else
	       cout << "Strings are not equal" << std::endl;
}
