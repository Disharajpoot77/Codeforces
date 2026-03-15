#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	string A1;
	cin>>A1;

	int A2[n];
	for(int  i=0; i<n; i++){
		cin>>A2[i];
	}

     int current=0;
	 int result=0;
	 for(int i=0; i<n-1; i++){
		if(A1[i]=='R' && A1[i+1]=='L'){
             current=A2[i+1]-A2[i];
			 current=current/2;
			//  cout<<current;

			 if(result==0){
				result=current;
				// cout<<result;
			 }
			 else{
				if(current<result){
					result=current;
					// cout<<result;
				}
			 }
		}
	 }


	 if(result!=0){
		cout<<result;
	 }
	 else{
		cout<<"-1";
	 }
	
}