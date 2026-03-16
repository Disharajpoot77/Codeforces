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
	long long left = 0;
	long long right = n - 1;
	long long  maxfact = 0;
	if (arr[right].first - arr[left].first <= d)
	{
		for (int i = 0; i < n; i++)
		{
			maxfact += arr[i].second;
		}
	}
	else if (arr[right].first - arr[left].first > d)
	{
		if (arr[right].second > arr[left].second)
		{
			maxfact += arr[right].second;
			left++;
		}
		else
		{
			maxfact += arr[left].second;
			right--;
		}
	}
	cout << maxfact;

	return 0;
}