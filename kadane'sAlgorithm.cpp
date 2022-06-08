#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long ans =0;
    long long curri=0;
    for(int i=0;i<n;i++) {
        curri = max(curri+arr[i],(long long)arr[i]);
        ans = max(ans,curri);
    }
    return ans;
}
