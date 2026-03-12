
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }

    int sum=0;
    int index = 0;   
	 int count=0;
    int current=0;
    for(int i=0; i<n; i++){
        if(count<k){
            count++;
            current+=arr[i];
            sum+=arr[i];
          
        }
        else{
            current+=arr[i];
            current-=arr[i-k];
			// index=i-k+1;
             if(current<sum){
                sum=current;
				index=i-k+1;
			 }
        }
    }
    
    cout<<index+1<<endl;
    // cout<<sum;
    return 0;
}
      

 