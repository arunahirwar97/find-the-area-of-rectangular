#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
 {
 float b,l;
 char ch;
float area,perimeter,diagonal,exit ;
cout<<"               RECTANGULAR MENU "<<endl<<endl;
 cout<<"Enter the value of length(l) and bredth (b) "<<endl;
 cin>>b>>l;
 cout<<"1.Area "<<endl;
 cout<<"2.perimeter  "<<endl;
 cout<<"3.Diagonal"<<endl;
 cout<<"4.exit  "<<endl;
 cin>>ch;

  switch(ch)
 {
 case'1': cout<<"area "<<"="<<l*b<<" ;"<<endl;
	    area=l*b;
	    break;
 case'2': cout<<"Perimeter "<<"= "<<2*(l+b)<<" ;"<<endl;
	   perimeter=2*(l+b);
	   break;
 case'3': cout<<"Diagonal " <<"= "<<sqrt((l*l)+(b*b))<< " ;"<<endl;
	  diagonal=sqrt((l*l)+(b*b));
	  break;
 case'4' : break;

 default: cout<<"This is not possible"<<endl;
 }
 getch();
 }