#include<iostream>
using namespace std;

int main(){
  int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
       cin>>arr[i];
	}
   int k;
   cin>>k;
   int juicy[k];
   for (int i = 0; i<k; i++)
   {
       cin>>juicy[i];
   }

  int temp[n];
  temp[0]=arr[0];
   for(int i=0; i<n-1; i++)
{
   temp[i+1]=arr[i]+arr[i+1];
   cout<<"worms"<<arr[i];
}

//    for(int i=0; i<k; i++){
//        for(int j=0; j<n; j++){


//            if(juicy[i]=arr[j]){
//                cout<<"jcount"" "<<j+1<<endl;
//            }
//        }
//    }

  

}