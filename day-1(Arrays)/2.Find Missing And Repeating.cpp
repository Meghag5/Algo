//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans1,ans2;
    unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
           m[arr[i]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(m[arr[i]] == 2){
                ans1 = arr[i];
            }
            if(m.find(i) == m.end()){
                ans2 = i;
            }
        }
        cout<<ans1<<" "<<ans2;
        return 0;
}
