#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];	
	}
	 int negative=0;
	 int track=0;
	 int A1[n];
	 int l1=0;
	 int A2[n];
	 int l2=0;
	 int A3[n];
	 int l3=0;
	 for(int i=0; i<n; i++){
		if(arr[i]==0){
            A3[l3]=arr[i];
			l3++;
		}
		else if(arr[i]>0){
			A2[l2]=arr[i];
			l2++;
		}
        else{
           if(negative==0){
			A1[l1]=arr[i];
			l1++;
			negative++;
		   }
		   else if(negative==1){
			track=i;
			negative++;
		   }
		   else if(negative==2){
             A2[l2]=arr[i];
			 l2++;
			 negative++;
		   }
		   else{
			A3[l3]=arr[i];
			l3++;
		   }

		}

	 }

	 if(negative==2){
		A3[l3]=arr[track];
		l3++;
	 }
	 else{
        if(negative>2){
			A2[l2]=arr[track];
			l2++;
		}
	 }

     cout<<endl;
	cout<<l1<<" ";
    for(int i=0; i<l1; i++){
		cout<<A1[i]<<" ";
	}
	cout<<endl;
	cout<<l2<<" ";
    for(int i=0; i<l2; i++){
		cout<<A2[i]<<" ";
	}
	cout<<endl;
	cout<<l3<<" ";
    for(int i=0; i<l3; i++){
		cout<<A3[i]<<" ";
	}


}