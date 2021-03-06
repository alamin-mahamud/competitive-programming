#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void merge(int a[], int l, int m,  int n, int h){

  while(l < m+1){
    if(a[l] > a[n]){
      swap (a[l],a[n]);n++;
    }
    l++;

  }
}

void merge_sort(int a[], int low, int high){
  if(high > low ){
    int mid = (low + high) / 2;
    merge_sort(a, low, mid);
    merge_sort(a, mid+1, high);
    merge(a, low-1, mid-1, mid, high-1);
  }
}

int main(){
  int a[] = {5, 4, 3, 2, 1};
  merge_sort(a, 1, 5);
  for(int i = 0; i < 5; i++)
    cout << a[i] << endl;
  return 0;
}
