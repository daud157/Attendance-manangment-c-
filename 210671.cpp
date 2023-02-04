#include <iostream>

#include "student.h"
#include "sre.h"
#include "islamiat.h"
using namespace std;
void registration();
void login();
void menu();
int main()

{   islamiat i1;
    sre s1;
    oop s;
    menu();
    cout<<"Chose Your Subject\n";
    cout<<"Enter 1 to mark Islamiat's attendance\n";
    cout<<"Enter 2 to mark    SRE     attendance\n";
    cout<<"Enter 3 to mark    Oop     attendance\n";
    int subject,n;
    cout<<"\t\t\tEnter Your Subject\n";
    cin>>subject;
    switch (subject)
    {
    case 1:

     i1.listofstudents();
     i1.idalloc();
     cout<<"Enter 1 to if you want to check history\n";
     cin>>n;
     switch (n)
     {
     case 1:
     i1.savedata();
     i1.showdetails(); /* constant-expression */
        /* code */
        main();
        break;
    
     default:
     main();
        break;
     }
   
     case 2:
     s1.listofstudents();
     s1.idalloc();
    
         cout<<"Enter 1 to if you want to check history\n";
      cin>>n;
     switch (n)
     {
     case 1:
     s1.savedata();
     s1.showdetails(); /* constant-expression */
        /* code */
        main();
        break;
    
     default:
     main();
        break;
     }
   case 3:
   s.listofstudents();
   s.idalloc();
    cout<<"Enter 1 to if you want to check history\n";
   cin>>n;
     switch (n)
     {
     case 1:
     s.savedata();
     s.showdetails(); /* constant-expression */
        /* code */
        main();
        break;
    
     default:
     main();
        break;
     }
    default:
        break;
    }
   

return 0;
}
void registration()

{  string usernam;
   int passwor;

   cout<<"Enter Your Username\n";
   cin>>usernam;
   cout<<"Enter the Password\n";
   cin>>passwor;

    ofstream reg("registration.txt",ios ::app);
    reg<<usernam<<"\t"<<passwor<<endl;
    main();
    reg.close();

}
void login(){
   string username;
   int password,count;

   cout<<"Enter Your Username\n";
   cin>>username;
   cout<<"Enter your Password\n";
   cin>>password;
   string user[100];
   int pass[100];
 int j=0;
  ifstream rege;

  rege.open("registration.txt",ios::app);
   while(rege>>user[j]>>pass[j]){
    
 if(username==user[j]&&password==pass[j])
     count=1;
    j++;
   }

    
      
          rege.close();
        
          if (count==1){
            cout<<"          Your login successfully\n";
          
          }
          else {
          cout<<"You have Entered wrong  Username or Password\n";
          main();}
   }
 
   void menu(){

cout<<"\t\t\tWelcome to Attendance Managment System\n\n\n ";
cout<<"\t\t\tEnter 1 to Register\n";
cout<<"\t\t\tEnter 2  to log in\n\n";
int k;
cin>>k;
switch (k)
{
case 1:
registration();
    
    break;
    case 2:
login();
break;
default:
cout<<"Enter a valid option\n";

main();
    break;
}

   }

 



   


