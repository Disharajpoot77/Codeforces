#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int programming=0;
	int math=0;
	int PE=0;
	
	for(int i=0; i<n; i++){
		if(arr[i]==1)
			programming=programming+1;
		else if(arr[i]==2)
			math=math+1;
		else
			PE=PE+1; 
	}
	int team=0;

	while (programming>0 && math>0 && PE>0) {
		programming--;
			math--;
			PE--; 
			team++;
	}
	cout << team<<endl;
	
	for(int i=0; i<team; i++){
		for(int j=0; j<n; j++){
			if(arr[j]==1){
				arr[j]=9;
				cout << ++j << " ";
				break;
			}
		}
		for(int j=0; j<n; j++){
			if(arr[j]==2){
				arr[j]=6;
				cout << ++j <<  " ";
				break;
			}
		}
		for(int j=0; j<n; j++){
			if(arr[j]==3){
				arr[j]=9;
				cout << ++j << " ";
				break;
			}
		}

		cout << endl;
	}
	return 0;

}




	

	// cout<<programming<<" "<<math<<" "<<PE<<endl;
