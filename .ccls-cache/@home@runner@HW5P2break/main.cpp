#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
  // LOAD IN FILE
  ifstream inFile;    //declare stream variabl
  inFile.open("NumberData1.txt");

  //VARIABLES
  int dataTemp;
  int sumData = 0;
  int counter = 0;
  // LOAD IN ALL DATA IN WHILE LOOP
  while (inFile >> dataTemp)
    {

      
      if (dataTemp >= 0)
      {
        //update vakye of all data and number points loaded
        //cout << dataTemp << endl;
        sumData = sumData + dataTemp;
        counter++;
      }
      else // value is negative and we need to exit the loop
      {
        cout << "Negative value encountered of " << dataTemp << "." << endl;
        cout << "Will not use the rest of the data ..." << endl;
        break;
      }
      
    }
  
}