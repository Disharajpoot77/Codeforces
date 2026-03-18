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
	D=arr[n-1]-arr[0];
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]-arr[i]==D){
			count++;
		}
		}
	}
	cout<<D<<" "<<count<<endl;
}