#include <iostream>
#include <iomanip>
using namespace std; 

//1 lap = .25 miles
const double LAP_TO_MILES = .25;
//define function LapsToMiles; parameter = double num_of_laps; calculate # of miles; returns a double for the number of miles
double LapsToMiles(double laps){
  double totalMiles;
  totalMiles = laps * LAP_TO_MILES;
  return totalMiles;
}


int main(){
  double numLaps;
  //read in num_of_laps as type double
  cin >> numLaps;
  //call function LapsToMiles and output the number of miles
  cout << fixed << setprecision(2) << LapsToMiles(numLaps) << endl;
  return 0;
}