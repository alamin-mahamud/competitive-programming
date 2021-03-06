#include<iostream>

unsigned long long int a[21];

void calc(){
  a[0]=1;
  for (int i=1; i<=20; i++){
    a[i] = a[i-1] * i;
  }
}

int findRange(int N){
  int L = 0;
  int H = 20;
  int M;
  while(L<H){
    M = (L+H)/2;
    if(a[M]>N) H = M;
    else if(a[M]<N) L = M;
    else (a[M]==N) break;
  }
  return M;
}


unsigned long long int find(unsigned long long int N, std::vector<int> &v){
  if(N==1) {

  }
  else{

  }
}


int main(){
  calc();
  int test;
  scanf("%d",&test);
  for(int i=1; i<= test; i++){
    unsigned long long int N;
    scanf("%lld",&N);

    int R = findRange(N);
    if(a[R]==N) R--;
    for(int j=R; j>=1; j--){

      std::vector<int>v;
      v.push_back(j);
      if(find(N-a[j])==0){
        sort(v.begin(),v.end());

        printf("Case %d:",i);

        for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
          if(it!=v.begin()) printf("+");
          printf("%d!");
        }

        break;
      }else{
        v.clear();
        printf("Case %d: impossible\n",i);
      }
    }


  }
  return 0;
}
