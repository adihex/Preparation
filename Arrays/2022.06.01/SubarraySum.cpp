// { Driver Code Starts
#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

// } Driver Code Ends
class Solution {
 public:
  // Function to find a continuous sub-array which adds up to a given number.
  vector<int> subarraySum(int arr[], int n, long long s) {
    // Your code here
    vector<int> ans;
    long long sum = 0;
    int first = 0, last = 0;
    for (last = 0; last < n;) {
      if (sum + arr[last] == s) {
        ans.push_back(first + 1);
        ans.push_back(last + 1);
        return ans;
      } else if (sum + arr[last] < s) {
        sum += arr[last];
        last++;
      } else {
        sum -= arr[first];
        first++;
      }
    }
    ans.push_back(-1);
    return ans;
  }
};

// { Driver Code Starts.

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    long long s;
    cin >> n >> s;
    int arr[n];
    const int mx = 1e9;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    vector<int> res;
    res = ob.subarraySum(arr, n, s);

    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
    cout << endl;
  }
  return 0;
}  // } Driver Code Ends
