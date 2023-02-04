#ifndef student_H
#define student_H
#include <iostream>
#include <fstream>
 using namespace std;
 class oop{
      
   private:
  
  
   public:
    int noofstudents=4;
   
     int present[4],absent[4],id[4];
    string name[5];
    int b=0;
    
    int day,p,a,statu,n,j;
   string nm;
   
 
    void setid(int arr[5])
   {   id[5]=arr[5];}
   int getid(){
     return id[5];
   }
 
virtual int idalloc(){
  
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
                  cout<<"ENTER 32 IF ALL STUDENT'S ATTENDACE IS MARKED "<<endl;
                  cin>>day;}
                  return b;
        }
       
     virtual string*  listofstudents(){
     for(int i=1;i<=noofstudents;i++){
      string convert=to_string(i);
      name[i]="oop"+convert;
    
     }
     return name;
     }
     
   virtual void savedata(){
      ofstream out;
 out.open("std.txt");
    for(int i=1;i<=noofstudents;i++){

 
  out<<name[i]<<"\t"<<id[i]<<"\t"<<b<<"\t"<<present[i]<<"\t"<<b-present[i]<<endl;


    } out.close();
    }
    
     virtual void showdetails(){
      ifstream in;
      in.open("std.txt");
      j=0;
      while(in>>name[j]>>id[j]>>b>>present[j]>>absent[j]){
       cout<<"NAME IS  "<<name[j] <<"  ID : "<<210671+j<<"   TOTTAL ATTENDANCE : "<<b<<"   PRESENTs :"<<present[j]<<"   ABSENTs :  "<<b-present[j]<<endl;
       j++;

      }
      in.close();
}
     

      
     
 
 
 
      
         

    

   
 };
#endif


