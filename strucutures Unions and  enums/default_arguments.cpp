#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double value = 1234.56789;
  cout << setw(10) << setfill('*') << value;
  return 0;
}