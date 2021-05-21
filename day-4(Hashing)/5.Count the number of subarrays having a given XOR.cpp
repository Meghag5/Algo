//https://www.geeksforgeeks.org/count-number-subarrays-given-xor/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    int ans=0,temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        temp = arr[i];
        if(arr[i]==m)
            ans++;
        for(int j=i+1;j<n;j++){
            temp = temp^arr[j];
            if(temp == m)
            ans++;
        }
    }

    cout<<ans<<" ";
    return 0;
}
