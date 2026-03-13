#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x[n],y[n];
	for(int i=0; i<n; i++){
		cin>>x[i]>>y[i];
	}
	  
	int cost=0;
	int total=0;
	for(int i=0; i<n; i++){
		if(i==0){
			total=x[i]*y[i];
		}
		else{
			if(y[cost]<=y[i]){
				total+=y[cost]*x[i];
				
			}
			else{
				total+=x[i]*y[i];
				cost=i;
			}
		}
	}
     cout<<total<<endl;


	return 0;
}