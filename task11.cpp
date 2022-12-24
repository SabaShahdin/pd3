# include<iostream>
using namespace std;
main()
{
 int value1;
 int value2;
 int rem1;
 int div1;
 int rem2;
 int div2;
 int rem3;
 int div3;
 int result1;
 int result2;
 int totalresult;
 cout<<"entre  3 digut value..";
 cin>>value1;
 cout<<"entre 2 digit value...";
 cin>>value2;
 rem1=value1%10;
 div1=value1/10;
 rem2=div1%10;
 div2=div1/10;
 rem3=value2%10;
 div3=value2/10;
 result1=rem1+rem2+div2;
 result2=rem3+div3;
 totalresult=result1+result2;
 cout<<"total resultis...."<<totalresult;
}