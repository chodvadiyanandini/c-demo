#include<iostream.h>
#include<conio.h>
class test
{
	public:
	int a;
	void display(int a)
	{
		cout<<this->a;
	}
};

void main()
{
	clrscr();
	test t;
	t.display(10);
	getch();
}

