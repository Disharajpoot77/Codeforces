#include<iostream>
using namespace std;

int main(){
	int n ;
	cin>>n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	//array sum
	int sum=0;
	for(int i=0; i<n; i++){
		
		sum=sum+arr[i];
	}
	// cout<<sum<<endl;
	int mysum=0;
	int count=0;  
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]<arr[j+1]){
				swap(arr[j],arr[j+1]);
				
			}
		}

	}
	// for(int i=0; i<n; i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	for(int i=0; i<n; i++){
	   if(mysum>sum-mysum){
	     break;
	   }
	   else{
		mysum=mysum+arr[i];
		count++;
	   }

	}
	cout<<count<<endl;
	// cout<<mysum<<endl;
     

	return 0;


}