#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	char arr[n];
	for(int i=0; i<n; i++){
       cin>>arr[i];
	}

     int count=0;
	for(int i=0; i<n-1; i++){
    //   int count=0;
	   if(i<n-2 && arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
		   for(int j=i; j<n; j++){
			  if(arr[j]==arr[j+1]){
				    count=count+1;
			  }
			 
			//    break;
		   }
		     break;
	   }
		else if(arr[i]==arr[i+1]){
			arr[i+1]=0;
	        count=count+1;
			
			// break;

	    //   cout<<"total dekh"" "<<count<<endl;
		}
			// break;
		
	}
	cout<<count<<endl;
} 