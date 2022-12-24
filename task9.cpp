# include<iostream>
using namespace std;
main()
{
 int value;
 int rem1;
 int rem2;
 int rem3;
 int rem4;
 int div1;
 int div2;
 int div3;
 int result; 
 cout<<"entre 4 digit number.....";
 cin>>value;
 rem1=value%10;
 div1=value/10;
 rem2=div1%10;
 div2=div1/10;
 rem3=div2%10;
 div3=div2/10;
 result= rem1+rem2+rem3+div3;
 cout<<"result is...."<<result;
}