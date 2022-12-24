# include<iostream>
using namespace std;
main()
{
  string movie;
  int adultTicketPrice;
  int childTicketPrice;
  int noOfAdultTickets;
  int noOfChildTickets;
  int percentageAmountToBeCharited;
  int priceOfAdultTickets;
  int priceOfChildTickets;
  int totalAmountGenerated;
  int charityRate;
  int amountAfterCharity;
  cout<<"entre Movie name...";
 cin>>movie;
 cout<<"entre adult ticket price....";
 cin>>adultTicketPrice;
 cout<<"entre child ticket price ...";
 cin>>childTicketPrice;
 cout<<"no of adult tickets sold";
 cin>>noOfAdultTickets;
 cout<<"entre no of child tickets sold";
 cin>>noOfChildTickets;
 cout<<"percentage amount to be charited";
 cin>>percentageAmountToBeCharited;
 priceOfAdultTickets= adultTicketPrice*noOfAdultTickets;
 priceOfChildTickets=childTicketPrice*noOfChildTickets;
 totalAmountGenerated=priceOfAdultTickets+ priceOfChildTickets;
 cout<<"total amount generated ...."<<totalAmountGenerated <<endl;
 charityRate=(totalAmountGenerated*percentageAmountToBeCharited)/100;
 amountAfterCharity=totalAmountGenerated-charityRate;
 cout<<"amount left after cahrity is..."<<amountAfterCharity;
}
 
 
 
