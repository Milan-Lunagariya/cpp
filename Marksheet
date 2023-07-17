// Pass , Fail and  ATKT for 2 subject using Nested and lader else..if  in Marksheet
#include<iostream.h>
#include<conio.h>
void main()
{
	int cpp, oracal,net,wp,total,count=0;
	float avg;
	clrscr();
	cout << "Enter Value Of Wordpress :"; cin >> wp;
	cout << "Enter Value Of Oracal :"; cin >> oracal;
	cout << "Enter Value Of Networking :"; cin >> net;
	cout << "Enter Value Of C++ :"; cin >> cpp;

	total = cpp+oracal+net+wp;
	cout << "\n Total is :"<<total<< "/400";
	avg = total/4;

	if(oracal<40)
		count++;
	if(cpp<40)
		count++;
	if(net<40)
		count++;
	if(wp<40)
		count++;

	if(count==1)
		cout << "\n 1 Subject in ATKT";
	if(count==2)
		cout << "\n 2 Subject in ATKT";
	if(count>=3)
		cout << "\n --- Fail ---";

	if(count == 0)
	{
		cout << "\n Avrage : " << avg;
		if(avg>= 90)
			cout << "\nGrade : A++";
		else if(avg < 90 && avg >= 80)
			cout << "\n Grade : A";
		else if(avg < 80 && avg >= 70)
			cout << "\n Grade : B++";
		else if(avg < 70 && avg >= 60)
			cout << "\n Grade : B";
		else if(avg < 70 && avg >= 60)
			cout << "\n Grade : C++";
		else

			cout << "\n Grade-c";
	}
	getch();
}
