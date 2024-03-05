#include <iostream>
using namespace std;

int main()
{
  double division = 5 / 3;
  double division2 = 5.0 / 3;
  double division3 = 5.0 / 3.0;

  cout << division << endl;
  cout << division2 << endl;
  cout << division3 << endl;

  double division4 = (double)5 / 3;
  cout << division4 << endl;
  return 0;
}