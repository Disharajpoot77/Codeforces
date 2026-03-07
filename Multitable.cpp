#include<iostream>
using namespace std;

int main(){
// 	int n;
// 	cin>>n;
// 	int x;
// 	cin>>x;
// 	int count=0;


// 	// int arr[n];
// 	for(int i=1; i<=n; i++){
// 	   for(int j=1; j<=n; j++){        
// 	 int num=i*j;
// 	 cout<<num<<" ";
// 	  if(num==x){
// 	  count++;
// 	  }

// 	}

// }
// cout<<"seeee"<<count<<" ";	

long long n,x;
	cin>>n>>x;
	int count=0;
	for(long long i=1; i * i<=x; i++){
		if(x%i==0){
			long long j=x/i;
			
			if(i<=n && j<=n){
				count++;
			}
			
			if(i!=j && i<=n && j<=n){
				count++;
			}
		}
	}
	cout<<count;
	
}