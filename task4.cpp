# include <iostream>
using namespace std;
main()
{ string name;
  int subject1;
  int subject2;
  int subject3;
  int subject4;
  int subject5;
  int totalmarks;
  float percentage;
  cout <<"your name ...";
  cin>>name;
  cout<<"entre first subject marks ...";
  cin>>subject1;
  cout<<"entre second subject marks ...";
  cin>>subject2;
  cout<<"entre third subject marks ...";
  cin>>subject3;
  cout<<"entre fourth subject marks ...";
  cin>>subject4;
  cout<<"entre fifth subject marks ...";
  cin>>subject5;
  totalmarks=subject1+subject2+subject3+subject4+subject5;
  percentage=(totalmarks/500.0)*100;
 cout <<"name is  ..."<<name <<endl;
  cout<<"percentage is ..."<<percentage;
}
  