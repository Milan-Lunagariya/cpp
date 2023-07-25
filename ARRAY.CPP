//Memory management Oprator
// Syntax: poitnervar = new datatype;
#include<iostream.h>
#include<conio.h>

void main()
{
   int *ptr = new int[5];
   int i, sum=0;
   clrscr();
    for(i=0; i<5; i++)
    {
	cout << "Enter value of ptr:" << i <<" = ";
	cin >> ptr[i];
	sum += ptr[i];
    }
    cout << "\nSum = " << sum;
    
   getch();
}