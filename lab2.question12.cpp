#include<iostream>
#include<cmath>
using namespace std;
int main(){
float a;
float b;
float c;
float d;
cout<<"principle=";
cin>>a;
cout<<"rate=";
cin>>b;
cout<<"time=";
cin>>c;
d=a*(pow((1+(b/100)),c));
cout<<"compound intrest="<<d;
}
