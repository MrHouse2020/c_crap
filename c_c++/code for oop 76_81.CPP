#include<stdio.h>
#include<iostream.h>
#include<conio.h> 
#include<STRING.h>
class candidate
 {
private:
long Rno;
 char Cname[20];
  float Agg_marks; 
  char Grade;
public: candidate()
 { Rno=0; 
 strcpy( Cname,"N,A");
Agg_marks=0.0;
}
Getdata() { 
cout<<"......... WELCOME TO THE UNIVERSITY.........."<<endl;
 cout<<"......... ENTER THE GIVEN INFO REQUIRED FOR GRADES....."<<endl;
cout<<"enter the roll name of candidate:"<<endl; 
cin>>Rno; 
cout<<"enter the aggreate_marks of candidate:"<<endl; 
cin>>Agg_marks; 
cout<<"enter the name of candidate:"<<endl; cin>>Cname;
};
setGrade() 
{ 
if(Agg_marks>=80)
Grade='A'; 
else if (Agg_marks>=65)
Grade='B'; 
else if (Agg_marks>=50)
Grade='C'; 
else
Grade='D'; 
};
dispResult() 
{ 
cout<<"The roll name of candidate is:"<<Rno<<endl; 
cout<<"The name of the candidate is:"<<Cname<<endl; 
cout<<"The aggregate marks of the candidate is:"<<Agg_marks<<endl; 
cout<<"The grade of the candidate is :"<<Grade<<endl; 
cout<<"The grade of the candidate is :"<<Grade<<endl; 
cout<<"............ THIS IS THE INFO OF GIVEN CANDIDATE..........."<<endl;
};
};
void main () 
{ 
candidate c;
c.Getdata();
c.setGrade();
c.dispResult(); 
getch();
}
