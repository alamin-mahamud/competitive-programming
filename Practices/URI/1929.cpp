#include <bits/stdc++.h>
#define endl "\n"
#define isvalid(a, b, c, d) (a+b > c && a+c > b && b+c > a) || (a+b > d && a+d > b && b+d > a) || (b+c > d && c+d > b && b+d > c) || (a+c > d && a+d > c && c+d > a) 
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(isvalid(a, b, c, d)) cout << "S" << endl;
  else cout << "N" << endl;
}
