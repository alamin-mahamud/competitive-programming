// COPYRIGHT 2017_RED

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;
using std::max;

int main(int argc, char *argv[]) {
  double a, b;
  cin >> a >> b;
  cout<<fixed<<setprecision(3);
  cout<< (a * b)/12.0 << endl;
  return 0;
}
