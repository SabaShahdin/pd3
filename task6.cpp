# include <iostream>
using namespace std;
main()
{
 int sizeOfFertilizerbag;
 int costOfBag;
 int areaCoveredByBag;
 int costOfFertilizer;
 int costOfFertilizingArea;
 cout<<"entre bag size in pounds...";
 cin>>sizeOfFertilizerbag;
 cout<<"entre cost of one bag...";
 cin>>costOfBag;
 cout<<"entre area covered by each bag ...";
 cin>>areaCoveredByBag;
 costOfFertilizer=costOfBag/sizeOfFertilizerbag;
 cout<<"cost of the fertilizer per pound ..."<<costOfFertilizer <<endl;
 costOfFertilizingArea=areaCoveredByBag*sizeOfFertilizerbag;
 cout<<"cost of fertilizing area per square feet..."<<costOfFertilizingArea;
}