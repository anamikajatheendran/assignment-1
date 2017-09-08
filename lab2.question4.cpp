#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e;
cout<<"number of days";
cin>>a;
b=a/365;
cout<<"number of years"<<b;
c=a%(365*b);
d=c/7;
cout<<"number of weeks"<<d;
e=c%(d*7);
cout<<"number of days"<<e;
}
