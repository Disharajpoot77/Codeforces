#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
	int n, d;
	cin >> n >> d;
	pair<long long, long long> arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr + n);
     long long max=0;
	 long long current=0;
	 long long m=0;
	 
	 long long limit=arr[m].first+d;
	 
	//  cout<<"limit"<<limit<<endl;
	 for(int i=0; i<n; i++){
		if(arr[i].first<limit){
			current+=arr[i].second;	
			cout<<"checkkkk"<<arr[i].first<<" "<<arr[i].second;
		}
	 }
	
	// arr[i]=arr[i+1].first;
     if(current>max){
		max=current;
	 }

     
	 cout<<"final"<<max;
	

	return 0;
}
