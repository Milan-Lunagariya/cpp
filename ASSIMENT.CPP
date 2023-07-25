
#include<iostream.h>
#include<conio.h>

void main()
{
    int a, b;
    clrscr();
    cout << "Enter value of a : "; cin >> a;//30
    cout << "Enter value of b : "; cin >> b;//10

    cout << a<<"+="<<b <<" : " << (a+=b) << endl;//40
    cout << a<<"-="<<b <<" : " << (a-=b) <<endl;//30
    cout << a<<"*="<<b <<" : " << (a*=b) <<endl;//300
    cout << a<<"/="<<b <<" : " << (a/=b) <<endl;//30
    cout << a<<"%="<<b <<" : " << (a%=b) <<endl;//0
    getch();
}