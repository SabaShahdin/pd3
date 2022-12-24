#include<iostream>
using namespace std;
main()
{
 float vegetablePricePerkg;
 float fruitPricePerkg;
 int  totalKgofVegetables;
 int totalKgOfFruits;
 float vegetablesCost;
 float fruitCost;
 float totalprice;
 float totalPriceinRs;
 cout<<"vegetable price per kg...";
 cin>>vegetablePricePerkg;
 cout<<"Fruits price per kg...";
 cin>>fruitPricePerkg;
 cout<<"total kg of vegetables..";
 cin>>totalKgofVegetables;
 cout<<"toatl kg of fruit...";
 cin>> totalKgOfFruits;
 vegetablesCost=vegetablePricePerkg*totalKgofVegetables;
 fruitCost=fruitPricePerkg*totalKgOfFruits;
 totalprice= vegetablesCost+fruitCost;
 totalPriceinRs=totalprice/1.94;
 cout<<"total price in ruppees...."<<totalPriceinRs;
}
 