#include<iostream>
#include<string>
using namespace std;
int main()
{  int point;
   cout<<"point convert to grade"<<endl; 
   cout<<"point : ";
   cin>>point;
   if(point >= 101)      cout<<"grade : Error\n";
   else if(point >= 90)  cout<<"grade : A\n";
   else if(point >= 80)  cout<<"grade : B\n";
   else if(point >= 70)  cout<<"grade : C\n";
   else if(point >= 60)  cout<<"grade : D\n";
   else if(point >= 0)   cout<<"grade : F\n";
   else cout <<"grade : Error";
   return(0);
}