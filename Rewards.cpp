#include<iostream>
using namespace std;

int main(){
	int a1,b1,c1;
	int a2,b2,c2;
	int n;
	cin>>a1>>b1>>c1;
	cin>>a2>>b2>>c2; 
	cin>>n;

	int cuptotal=a1+b1+c1;
	int medaltotal=a2+b2+c2;

	int x=cuptotal/5;
	if(cuptotal%5!=0){
		x++;
	}
	int y=medaltotal/10;
	if(medaltotal%10!=0){
		y++;
	}
	if(x+y<=n){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}	
	
}