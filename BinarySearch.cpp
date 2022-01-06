#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int binarySearch(int arr[], int n, int key){
	int start = 0;
	int end = n-1;
	while(start <= end){
		int mid = (start + end) / 2;
		if(arr[mid] == key) return mid;
		else if(arr[mid] < key){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    cout<<binarySearch(arr, n, key)<<'\n';
}
