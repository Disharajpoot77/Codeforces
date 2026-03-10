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
    
	int l=0,r=n-1;
	int sereja=0,dina=0;
	bool turn=true;
     
	while(l<=r){
		if(arr[l]>arr[r]){
			if(turn)
			sereja+=arr[l];
			else dina+=arr[l];
			l++;
		}
		else{
			if(turn)
			sereja+=arr[r];
			else dina+=arr[r];
			r--;

		}

		turn=!turn;
	}

    cout<<sereja<<" "<<dina<<endl;

	return 0;

		


}