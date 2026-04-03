#include<iostream>
using namespace std;
#include<algorithm>

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int median=n/2;
	for(int i=0; i<k; i++){
		// cout<<arr[median];
		// median+1;
		if(median+1<n && arr[median]<arr[median+1]){
			arr[median]++;
			// cout<<"seee"<<arr[median]<<endl;
		}
		else {
			arr[median]++;
		}
	
	}
	cout<<arr[median]<<endl;
}
 
