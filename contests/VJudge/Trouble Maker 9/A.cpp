#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin >> tc;
	int a[tc];
	for(int i=0; i<tc; i++){
		cin >> a[i];
	}
	if(tc==1 && a[tc] != 0 && a[tc] != 15) cout << -1 << endl;
	else if(tc==1 && a[tc]==0) cout << "UP" <<endl;
	else if(tc==1 && a[tc]==15) cout << "DOWN" <<endl;
	else if(a[tc-1]-a[tc-2] == 1 && a[tc-1]<15) cout << "UP"<<endl;
	else if(a[tc-1]-a[tc-2] == 1 && a[tc-1]==15) cout << "DOWN"<<endl;
	else if(a[tc-1]-a[tc-2] == -1 && a[tc-1]>1) cout << "DOWN"<<endl;
	else if(a[tc-1]-a[tc-2] == -1 && a[tc-1]==1) cout << "UP"<<endl;

	return 0;
}