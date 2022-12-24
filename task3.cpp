# include <iostream>
using namespace std;
main()
{
  int initialVelocity;
  int time;
  int acceleration;
  int finalVelocity;
  cout<<"entre initial velocity...";
  cin>>initialVelocity;
  cout<<"entre time ...";
  cin>>time;
  cout<<"entre acceleration ...";
  cin>>acceleration;
  finalVelocity=(acceleration*time)+initialVelocity;
  cout <<"final velocity is...."<<finalVelocity;
 }