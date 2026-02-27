#include<iostream>
using namespace std;

int main(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int first=n*a;
	int second=((n+m-1)/m)*b;
	int third =(n/m)*b+(n%m)*a;
	if(first<second && first<third){
		cout<<first<<endl;
	}else if(second<first && second<third){
		cout<<second<<endl;
	}else{
		cout<<third<<endl;
	}

	
	
	// cout<<"totall"<<Mtickets+Atickets<<endl;
	
	
   return 0;
	
}