// C++ prog Call by refrence
#include<iostream.h>
#include<conio.h>
void swap(int &a, int &b);
int max(int &a, int &b);
void main()
{
	int a,b,c;
	clrscr();
	cout << "Enter Value of a=";
	cin >> a;
	cout << "\n Enter Value of b = ";
	cin >> b;
	cout << "\n Before Swap a = " << a << "\t b= "<<b;
	swap(a,b);
	cout << "\n After Swap a = " << a << "\t b= "<<b;
	int big = max(a,b);
	cout << "\n Biggest value :"<<big;
	c = max(a,b);
	cout << "\n a="<<a <<"\tb="<<b <<"\tc="<<c;//a=20,b=10,c=20
	a = max(a,b);
	cout << "\n a="<<a <<"\tb="<<b <<"\tc="<<c;//a=20, b=10, c=20


	getch();
}
void swap(int &a , int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int max(int &a, int &b)
{
	if(a>b)
	{
		return a;
	}
	else{
		return b;
	}
}
