#include<iostream>
using namespace std;

int main(){
	string str;
	cin>>str;
	bool alphabet_arr[26]={false};
	for(int i=0; i<str.length(); i++){
		int temp =str[i]-'a';
		alphabet_arr[temp]=!alphabet_arr[temp];
	}

	int count=0;
	for(int i=0; i<26; i++){
		if(alphabet_arr[i]){
			count++;
		}
	}

	if(count==0 || count%2==1){
		cout<<"First";
	}
	else if(count!=0 || count%2==0){
		cout<<"Second";
	}


}

