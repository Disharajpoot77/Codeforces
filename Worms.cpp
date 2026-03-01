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

for(int i=1; i<n; i++){
    temp[i]=temp[i-1]+arr[i];
}
// for(int i=0; i<n; i++){
//     cout<<temp[i]<<" ";
// }
// cout<<endl;
 for(int i=0; i<k; i++){
        int index = lower_bound(temp, temp+n, juicy[i]) - temp;
        cout << index+1 << endl;
    }


}