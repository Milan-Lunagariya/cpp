// Increment / Decremenrt
#include<iostream.h>
#include<conio.h>
class oprator
{
	public :
		int a;
		int b;
	public :
		void get()
		{
			cout << "Enter Value Of a: ";
			cin >> a;
			cout << "\nEnter Value Of b: ";
			cin >> b;
		}
		void increment();
		void decrement();
};

void oprator :: increment()                           //5 ,10
{
	cout << "\nOriginal Value of a :"<<a;  //5
	cout << endl<<"++a : " <<++a;        //6
	cout << endl<<"a++ : " <<  a++;       //6 ,a=7
	cout << endl<<"b++ :" <<b++;           //b=11
	b=a+b;                                  //b = 7+11
	cout << endl<<"b=a+b :" <<b;               //b=18
}
void oprator :: decrement()
{
	cout << "\nOriginal Value of b :"<<b;    //  18
	cout << endl<<"--b : " <<--b;                //17
	cout << endl<<"b-- : " << b--;              //17 ,b=16
	cout << endl<<"b-- :" <<b--;                //16 ,b =15
	cout << endl<<"a-b = " <<(a-b);                 //7-15=-8
}
void main()
{
	clrscr();
	oprator o1;
	o1.get();
	o1.increment();
	o1.decrement();
	getch();
}
