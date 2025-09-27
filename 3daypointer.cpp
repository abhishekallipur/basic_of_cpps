#include<iostream>
using namespace std;
//this struct synatx
struct studnet 
{
    string name;
    int roll;
    char clas;
};

typedef struct stud
{
    string name;
    int roll;
    char clas;
}st;
union car
{
   int num;
   int model;
   char rate;
};


int main(){
    //this pointer with array 
int a[10]={1,2,3,4,5,6,7,8,9,10};
int *p=a;
cout<<*p<<endl;
cout<<*(p++)<<endl;
cout<<(*++p)<<endl;
/* this structures*/
struct studnet S1;
S1.name ="abhishek";
S1.roll=1;
S1.clas='A';
cout<<S1.clas<<endl;
cout<<S1.name<<endl;
cout<<S1.roll<<endl;
//this is using typedef
st A1;
A1.name="allipur";
/*this uion same as struct but the meormy is been shared only one datatype can be used */
union car c1;
c1.rate='a';
cout<<c1.rate;
return 0;
}
