#include<iostream.h>
#include<conio.h>
#include<dos.h>
class tollbooth
{
private : int car;
	  int amount;
public : void screen1()
	 {
	 int i;


	 for(i=1;i<=80;i++)
	 {

	  gotoxy(i,1);
	  cout<<(char)219;
	  gotoxy(i,24);
	  cout<<(char)219;
	 }
	 for(i=2;i<=24;i++)
	 {
	  gotoxy(1,i);
	  cout<<(char)177;
	  gotoxy(80,i);
	  cout<<(char)177;
	 }
	 }
	 void screen2()
	 {
	 clrscr();
	 int i;
	  for(i=1;i<=80;i++)
	 {
	  gotoxy(i,1);
	  cout<<(char)219;
	  gotoxy(i,24);
	  cout<<(char)219;
	 }
	 for(i=2;i<=24;i++)
	 {
	  gotoxy(1,i);
	  cout<<(char)177;
	  gotoxy(80,i);
	  cout<<(char)177;
	 }
	 }
	 void welcome()
	 {
	 car=0;
	 amount=0;
	 textcolor(5);
	 gotoxy(34,4);
	 cout<<"NH TOLLBOOTH";
	 gotoxy(28,8);
	 cout<<(char)2;
	 cout<<" WELCOME TO TOLLBOOTH";
	 gotoxy(34,20);
	 cout<<"enter any key";
	 getch();
	 }

	 void menu()
	 {
	 gotoxy(34,3);
	 cout<<"NH TOLLBOOTH";
	 gotoxy(3,5);
	 cout<<"paying car : "<<car;
	 gotoxy(59,5);
	 cout<<"amount : "<<amount;
	 gotoxy(8,10);  cout<<"MENU";
	 gotoxy(8,11);  cout<<"1.paying car";
	 gotoxy(30,11); cout<<"paying amount = 5rs.";
	 gotoxy(8,12);  cout<<"2.nonpaying car";
	 gotoxy(8,13);  cout<<"3.reset all data";
	 gotoxy(8,14);  cout<<"4.exit";
	 gotoxy(8,18);  cout<<"enter choice :  \b";
	 }
	 void paying_car()
	 {
	 car++;
	 amount+=5;
	 menu();
	 }
	 void nonpaying_car()
	 {
	 car++;
	 menu();
	 }
	 void reset()
	 {
	 car=0;
	 amount=0;
	 menu();
	 }
};
void main()
{
char ch;
clrscr();
textcolor(WHITE);
tollbooth t;
textcolor(WHITE);
t.screen1();
t.welcome();
clrscr();
textcolor(WHITE);
while(1)
{
t.screen2();
t.menu();
cin>>ch;
 switch(ch)
 {
  case '1': t.paying_car();
	  break;
  case '2': t.nonpaying_car();
	  break;
  case '3': t.reset();
	  break;
  case '4': return;
  default: gotoxy(24,18);
	   cout<<"invalid choice check your choice";
	   t.screen2();
	   t.menu();
	   break;
 }
}
}
