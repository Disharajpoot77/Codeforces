#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int count=0;
	// int arr[n];
	for(int i=0; i<n; i++){
		// cin>>arr[i];
		int pheight;
		cin>>pheight;
		if(pheight>k){
			count=count+2;
		}else{
			count=count+1;
		}
	}
	
	cout<<count<<endl;
}