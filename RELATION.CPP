//Relational Oprator

#include<iostream.h>
#include<conio.h>

class relational
{
	private :
		int a;
		int b;
	public :
		void get()
		{
			cout << "\nEnter Value of a:";
			cin >> a;
			cout << "Enter Value of b:";
			cin >> b;
		}
		void sum();

};
void relational :: sum()
{
	if(a < b)
	{ cout <<a  <<" < " <<b <<"\n"; }
	if(a > b)
	{ cout <<a  <<" > " <<b <<"\n"; }

	if(a<=b)
	{ cout << a <<" <= " <<b <<"\n"; }
	if(a>=b)
	{ cout << a <<" >= " <<b <<"\n"; }

	if(a!=b)
	{ cout <<a <<" != " <<b << "\n"; }
	else
	{ cout <<a <<" = " <<b; }

}
void main()
{
	clrscr();
	cout << "1.lessthen : < \n2.Graterthen : > \n3.Lessthen or Equalto: <= \n4.Greterthen or Equalto: >= \n5.Equalto := \n6.Not Eqalto: !()\n";
	relational a1;
	a1.get();
	a1.sum();

	getch();
}