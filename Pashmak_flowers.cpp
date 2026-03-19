#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
    for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int D=0;
    int count=0;
	int left=0;
	int right=n-1;
	D=arr[n-1]-arr[0];
	// if(arr[right]>arr[left]){
		// cout<<arr[right]<<" "<<arr[left]<<endl;
		if(arr[right]-arr[left]==D){
			count++;
			left++;
		}
		else{
			right--;
			left=0;
		}
	
	
	cout<<D<<" "<<count<<endl;
}