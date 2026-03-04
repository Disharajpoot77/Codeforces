#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x[n];
	for(int i=0; i<n; i++){
		cin>>x[i];
	}
	sort(x,x+n);
	int q;
	cin>>q;
	int m[q];
	for(int i=0; i<q; i++){
		cin>>m[i];
	}
	cout<<endl;
	
    for(int i=0; i<q; i++){
		// int count=0;
		int count = upper_bound(x,x+n,m[i])-x;
	      cout<<count<<endl;
		// for(int j=0; j<n; j++){
		// if(x[j]<=m[i]){
		// 	count++;
		// 	}	
		// 	// break;
		// }
		
		

	}
	
	

}