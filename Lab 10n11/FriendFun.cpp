#include<iostream>
using namespace std;
class temp
{
	int x;
	public:
		void get();
		void show();
		friend void manipulate(temp&);
};
void temp::show()
{
	cout<<"Value of x is  "<<x<<endl;
}
void manipulate(temp& f1)
{
	cout<<" in friend fun"<<endl;
	f1.x=f1.x+5;
}
void temp::get()
{
	cout<<"accept x\n";
	cin>>x;
}
int main()
{
	temp f1;
	f1.get();
	manipulate (f1);
	f1.show();
}
