#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	string S;
	cin>>S;
	int Danik=0;
	int Anton=0;
    for(int i=0;i<S.size();i++){
		  if(S[i]=='A'){
			Anton++;
			
		}
		else{
			Danik++;
		}
		
	}
	if(Anton>Danik){
		cout<<"Anton"<<endl;
	}
	else if(Anton<Danik){
		cout<<"Danik"<<endl;
	}
	else{
		cout<<"Friendship"<<endl;
	}

    return 0;
	


}