
#ifndef islamiat_h
#define islamiat_h
#include "student.h"
using namespace std;
class islamiat:public oop
{
private:
    
public:
     int students=4;
     string * listofstudents(){
     for(int i=0;i<=students;i++){
      string convert=to_string(i);
      name[i]="ISLAMIAT"+convert;
     }
     return name;
     }
      
      int idalloc(){
  
     p=0;
     a=0;
     
     cout<<"ENTER 32 IF ALL STUDENT'S ATTENDACE IS MARKED\n";
     cin>>day;
      cout<<"PRESS 0 FOR ABSENT AND 1 FOR PRESENT \n";
     while (day!=32){
     for(int i=1;i<=noofstudents;i++){
     
      cout<<"Enter Attendance of"<<210671+i<<"\t";
      
       cin>>statu;
        if(statu==1)
         present[i]=b+1;
      
         
            else 
       absent[i] =b+1; 
            }
             
                 b++;
                  cout<<"Enter Except 32 If You Want to update for next Day too"<<endl;
                  cin>>day;
                  }
                  return b;
        }
     
     void savedata(){
      ofstream out;
       out.open("islamiat.txt");
    for(int i=1;i<=students;i++){
     
  

  out<<name[i]<<"\t"<<id[i]<<"\t"<<b<<"\t"<<present[i]<<"\t"<<b-present[i]<<endl;


    }out.close();
    }
    void showdetails(){
      ifstream in;
      j=0;
      in.open("islamiat.txt");
      while(in>>name[j]>>id[j]>>b>>present[j]>>absent[j]){
       cout<<"NAME IS  "<<name[j] <<"  ID : "<<210671+j<<"   TOTTAL ATTENDANCE : "<<b<<"   PRESENTs :"<<present[j]<<"   ABSENTs :  "<<b-present[j]<<endl;
       j++;

      }
      in.close();}
      
};


#endif
