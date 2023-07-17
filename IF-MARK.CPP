//Only if condion by using Marksheet then includeed in Pass, Fail, ATKT.
#include<iostream.h>
#include<conio.h>
void main()
{
	int m1, m2 ,m3;
	int count=0, pass, fail;
	clrscr();
	cout << "\n Enter mark of m1 :"; cin >> m1;
	cout << "\n Enter mark of m2 :"; cin >> m2;
	cout << "\n Enter mark of m3 :"; cin >> m3;

	pass = (m1>=40 && m2>=40 && m3>=40);

	if(pass)
		cout << "\nPass";
	if(m1<40)
		count++;
	if(m2<40)
		count++;
	if(m3<40)
		count++;
	if(count==1)
		cout << "\n Atkt";
	if(count>=2)
		cout << "\n Fail";


	getch();
}