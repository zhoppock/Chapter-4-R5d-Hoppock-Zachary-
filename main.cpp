// Hoppock, Zachary
// oddDigitSumLoop.cpp
// Oct. 10, 2020
// Print the sum of all odd digits within a given value
// Version # 1
#include <iostream>
// ex. 32677, 3 + 7 + 7 = 17
using namespace std;
int main()
{
cout << "Please give a numeric value: ";
int n;
cin >> n;

int numb = n;

int sum = 0;
while (numb > 0)
{
  int rem = numb % 10;
  if ((rem % 2) == 0)
    numb = numb / 10;
  else if ((rem % 2) == 1)
  {
    sum = sum + rem;
    numb = numb / 10;
  }
}
cout << "The sum of all odd digits within " << n << " is " << sum;
return 0;
}