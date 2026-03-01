#include<iostream>
using namespace std;

int main(){
	string s,t;
	cin>>s;
	cin>>t;
	int sh =(s[0]-'0')*10 +(s[1]-'0');
	int sm =(s[3]-'0')*10 +(s[4]-'0') ;
	cout<<sh<<" "<<sm<<endl;
	int th =(t[0]-'0')*10 +(t[1]-'0');
	int tm =(t[3]-'0')*10 +(t[4]-'0') ;

    int currenttime=th*60+tm;  
	int sleep=sh*60+sm;
	int time=currenttime-sleep;
	if (time<0){
		time=time+1440;
	}
	int h=time/60;
	int m=time%60;

	if(h<10) cout<<"0";
		cout<<h<<":";
	if (m<10) cout<<"0";
		cout<<m;
		return 0;
	

}