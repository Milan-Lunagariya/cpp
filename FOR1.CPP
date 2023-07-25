/*
1
1	2
1	2	3
1	2	3	4
1	2	3	4	5
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
			for(j=1; j<=i; j++)
			{
				cout << "\t" << j;
			}
			cout << endl;
		}

	getch();
}