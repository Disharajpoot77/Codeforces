#include<iostream>
#include<algorithm>
using namespace std;


int main(){
   string s;
   cin>>s;
    string num="";
	for(int i=0; i<s.size(); i++){
		char c = s[i];
		if(c !='+'){
			num+=c;
		}
	}

	sort(num.begin(),num.end());
	for(int i=0; i<num.size(); i++){
		cout<<num[i];
		if(i!=num.size()-1){
			cout<<"+";
		}
	}
  
}