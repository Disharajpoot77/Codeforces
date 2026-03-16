#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int module=n%7;
	int devide=n/7;
    int min=devide*2;
	int max=devide*2;

	
	if(module==0){
		//na naa
	}
	else{
		if(module==1){
			max+=1;
		}
		else if(module==6){
			min+=1;
			max+=2;
		}
		else{
		max+=2;
		}
	}
	

	cout<<min<<" "<<max<<endl;
	return 0;
}