#include <iostream>
#include "accounts.h"
using namespace std;

void printArray (int [], int);
void sortArrAsc(int[], int);

int main() 
{
  
  //Bubble Sort ASC method per task 2 of Unit 6 Assigment

cout << "\nStart: " << cpuTime() << endl;
sortArrAsc (accountBalances, maxAccounts);
printArray (accountBalances, maxAccounts);
cout << "\nEnd: " << cpuTime() << endl;


    return 0;
}

void printArray (int arrayVals[], int size)
{ 
    cout << "\nPrinted Values in Array: " << endl;
    for (int i = 0; i < size; i++)
    {
     //csv list
     cout << arrayVals[i] << ",";


    }
  

}

void sortArrAsc(int arrayVals[], int size)
{
int temp = 0;
//Bubble Sort ASC  a la Dr. Rajan Alex
for (int left = 0; left < size; left++)
{
  for (int right = left +1; right < size; right++)
  {
    if(arrayVals[left] > arrayVals[right])
    {
      temp = arrayVals[left];
      arrayVals[left] = arrayVals[right];
      arrayVals[right] = temp;
    }
  }
}



}