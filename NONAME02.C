#include<iostream.h>
#include<conio.h>
class A
{
  public:
	virtual void set()=0;
};

class B:public A
{
 public:
	void set()
	{
	  cout<<"set fun of B class"<<endl;
	}
};
void main()
{
 clrscr();
 A *a;
 B b;
 a=&b;
 a->set();
 getch();
}