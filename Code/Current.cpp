#include<iostream>
using namespace std;

main(){
cout<<"Enter the charge in coulombs:";
int charge;
cin>>charge;
cout<<"Enter the time:";
int time;
cin>>time;
int current;
current=charge/time;
cout<<"The current is"<<current<<"in Amperes";
}