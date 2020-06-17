#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {

  srand(time(0));//The srand() function is used to generate truly random numbers. use the curent tme of cpu

  for (int x = 1; x <= 3; x++) {
  cout << 1 + (rand() % 6) << endl;
  }
}