
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	cout << "\nEnter value of a = "; cin >> a;
	cout << "\nEnter value of b = "; cin >> b;

	cout << a <<"+" <<b <<"=" <<(a+b) << endl;
	cout << a <<"-" <<b <<"=" <<(a-b) << endl;
	cout << a <<"*" <<b <<"=" <<(a*b) << endl;
	cout << a <<"/" <<b <<"=" <<(a/b) << endl;
	cout << a <<"%" <<b <<"=" <<(a%b) << endl;
	getch();
}