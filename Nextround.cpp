#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k; 
	int arr[50];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int kscore=arr[k-1];
	// cout<<kscore<<endl;
	int count=0;
	for(int i=0; i<n; i++){
		if(arr[i]>=kscore && arr[i]>0){
			count=count+1;
		}	
	}
	cout<<count<<endl;
	}


// #include<iostream>
// using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k; 
    
//     int arr[50];
    
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     // for(int i=0; i<n; i++){
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;

//     int kscore = arr[k-1];
//     cout  << kscore << endl;

//     int count = 0;

//     for(int i=0; i<n; i++){
//         if(arr[i] >= kscore && arr[i] > 0){
//             count++;
//         }
//     }

//     cout<<"final count = "<<count<<endl;
// }




    
	// for(int i=0; i<n; i++){
	// 	cin>>arr[i];
	// }
	//  int kscore =arr[k-1];
	//  int count=0;
	// for(int i=0; i<n-1; i++){
	// 	if (arr[i]>=kscore && arr[i]>0){
	// 		count=count+1;
	// 	}
	// }
	// cout<<count<<endl;
