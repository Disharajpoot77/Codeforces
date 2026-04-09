#include<iostream>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
    int l=0;
	long long sum=0;
	int maxsum=0;
	for(int i=0; i<n; i++){
         sum+=arr[i];
		 while(sum>t){
			sum-=arr[l];
			l++;
		 }
		  maxsum=max(maxsum,i-l+1);	
	}
	cout<<maxsum<<endl;
	return 0;
}