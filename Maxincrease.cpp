#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int sum=arr[0];
	int length=1;
	int maxlength=1;
	for(int i=0; i<n-1; i++){
		if(arr[i]<arr[i+1]){
			sum+=arr[i+1];
			length++;
		}
		else {
			sum=arr[i+1];
			length=1;
		}
		if(length>maxlength){
			maxlength=length;
		}
		

	}

	cout<<maxlength<<endl;
	return 0;
	
}