#include<iostream>
using namespace std;

main(){

cout<<":Enter the name of Person:";
string name;
cin>> name;
cout<<"Enter the target Weight loss:";
int Weight_loss;
cin>> Weight_loss;
int Days;
Days=Weight_loss*15;
cout<<"Ahmad will need"<<Days<<"days";
cout<<"to lose"<<Weight_loss<<" kg weight by following doctors suggestion";
}