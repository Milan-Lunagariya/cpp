/*
5	4	3	2	1
4	3	2	1
3	2	1
2	1
1
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int n, i, j;
	clrscr();
		cout << "\nEnter Value of n :";
		cin >> n;
		for(i=n; i>=1; i--)
		{
			for(j=i; j>=1; j--)
			{
				cout << "\t" << j;
			}
			cout << endl;
		}

	getch();
}