#include <bits/stdc++.h>
using namespace std;


bool rec(int d, int i, int *a, int n){
  if(i == n) return false;
  if(a[i] == d) return true;
  rec(d, i+1, a, n);
}



int main(){
  int t;
  cin >> t;
  int a[t];
  for(int i = 0; i<t; i++){
    cin >> a[i];
  }
  int s;
  cin >> s;
  for(int i = 0; i<s; i++){
    int d;
    cin >> d;
    bool s = rec(d,0, a, t);
    cout << s << endl;
  }

  
  return 0;
}
