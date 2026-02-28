#include<iostream>
using namespace std;

int main(){
   string str;
   cin>>str;
   int upper=0;
   int lower=0;
   for(int i=0; i<str.length(); i++){
	if(str[i]>='A'&& str[i]<='Z'){
		upper=upper+1;
	
	}else if(str[i]>='a' && str[i]<='z'){
		lower=lower+1;
		 
	}
   }
    //    cout<<upper<<endl;
    //    cout<<lower<<endl;


  if(upper>lower){
	for(int i=0; i<str.length(); i++){
		str[i]=toupper(str[i]);
		cout<<str[i];
		
	}
}
	else if(lower>=upper){
	for(int i=0; i<str.length(); i++){
		str[i]=tolower(str[i]);
		cout<<str[i];
		
	}
	}
	
   
  



}