#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
		date(int,int,int);
		void show();
		date(date&);
		
};
date::date(int d, int m, int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void date::show()
{
	cout<<"date is" <<dd<<"/"<<mm<<"/"<<yy<<endl;
}
date::date(date&d_new)
{
dd=d_new.dd;
mm=d_new.mm;
yy=23;
}
int main()
{
	date d( 05,11,20);
	date d1(d);
	d.show();
	d1.show();
}
