#include<iostream>
using namespace std;

int main(){
      
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
	cin>>arr[i];
   }

   int max=0;
   int min=0;
   for(int i=0; i<n; i++){
      if(arr[i]>arr[max]){
		max=i;
	  }
	  else if(arr[i]<=arr[min]){
		min=i;
	  }
   }
   
   if(max==0 && min==n-1){
	cout<<"0";
   }
   else if(max==0){
	 cout<< (n-1-min);
   }
   else if(min==n-1){
	cout<< max;
   }
   else{
	if(max<min){
      cout<< (n-1-min+max);
	}
	else{
		cout<< (max+n-min-2);
	}


   }

//    cout<<"min"<<min<<"max"<<max;

}