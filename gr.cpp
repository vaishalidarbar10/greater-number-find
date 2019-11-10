#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"Enter any three number";
 cin>>a>>b>>c;
 cout<<"\n\n\n\n\n\t\t";
if(a>b)
{
if(a>c)
cout<<a<<" is greater";
else
 cout<<c<<"is greater";
 }
else
{if(b>c)
cout<<b<<"is greater ";
else
cout<<c<<"is greater";
}
getch();
}
