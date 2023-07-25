/*
5	4	3	2	1
5	4	3	2
5	4	3
5	4
5
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int n, i, j;
	clrscr();
		cout << "\nEnter Value of n :";
		cin >> n;
		for(i=1; i<=n; i++)
		{
			for(j=n; j>=i; j--)
			{
				cout << "\t" << j;
			}
			cout << endl;
		}

	getch();
}