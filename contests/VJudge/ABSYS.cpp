/*
** Note: This template uses some c++11 functions , so you have to compile it with c++11 flag.
**       Example:-   $ g++ -std=c++11 c++Template.cpp
**
** Author : Md. Alamin Mahamud
** Handle: A1am1N [CodeForces]
** Handle: A1am1N [alamin2016]
**/

/********   All Required Header Files ********/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

int sanitize(string s){
  int size = s.size();
  string o="";
  for(int i=0; i<size; i++){
    if(
      s[i]!='m' && 
      s[i]!='a' && 
      s[i]!='c' && 
      s[i]!='h' && 
      s[i]!='u' && 
      s[i]!='l' && 
      s[i]!='a' 
    ) o+=s[i];
  }
  size = o.size();
  int j=0;
  if(size!=0){
      for(int i = 0; i<size;i++){
        j = j*10 + (o[i]-'0');
      }
    return j;
  }
  else
  {
    return 0;
  }

}


/********** Main()  function **********/
int main(){

  int tc;
  cin>>tc;
  string s,t,u,v,w;
  while(tc--){
      cin >> s >> t >> u >> v >> w;
      int first = sanitize(s);
      int second = sanitize(u);
      int third = sanitize(w);
      if(first==0){first = third - second;}
      if(second==0){second = third - first;}
      if(third==0){third = first + second;}
      cout << first << " + " << second << " = " << third << endl;
  }

  return 0;
}
/********  Main() Ends Here *************/