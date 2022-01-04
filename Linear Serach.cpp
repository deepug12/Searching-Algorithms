/* If Code goes infinite then type   taskkill -im sample.exe -f
  */
#include<bits/stdc++.h>
using namespace std;
bool LinearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; ++i)
    {
        if(arr[i] == key) return true;
    }
    return false;

}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int key;
    cin >> key;

    if(LinearSearch(arr, n, key)) cout<<"Element is Present\n";
    else cout<<"Element is not Present\n";

    return 0;
}
