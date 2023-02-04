#ifndef sre_h
#define sre_h
#include "student.h"
using namespace std;
class sre:public oop
{
private:
    
public:
     int students=4;


     
     string * listofstudents(){
     for(int i=0;i<=students;i++){
      string convert=to_string(i);
      name[i]="SRE"+convert;
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
     for(int i=1;i<=students;i++){
     
      cout<<"Enter Attendance of"<<210671+i<<"\t";
      
       cin>>statu;
        if(statu==1)
         present[i]=b+1;
      
         
            else 
       absent[i] =b+1; 
            }
             
                 b++;
                  cout<<"ENTER 32 IF ALL STUDENT'S ATTENDACE IS MARKED "<<endl;
                  cin>>day;}
                  return b;
        }
     void savedata(){
      ofstream out;
 out.open("sre.txt");
    for(int i=1;i<=students;i++){
     
   
  out<<name[i]<<"\t"<<id[i]<<"\t"<<b<<"\t"<<present[i]<<"\t"<<b-present[i]<<endl;
 
    }out.close();

     }
      void showdetails(){
      ifstream in;
      j=0;
      in.open("sre.txt");
      while(in>>name[j]>>id[j]>>b>>present[j]>>absent[j]){
       cout<<"NAME IS  "<<name[j] <<"  ID : "<<210671+j<<"   TOTTAL ATTENDANCE : "<<b<<"   PRESENTs :"<<present[j]<<"   ABSENTs :  "<<b-present[j]<<endl;
       j++;

      }
      in.close();}
};


#endif
