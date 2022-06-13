// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    void swap(string &S, int i, int j)
    {
        char temp=S[j];
        S[j]=S[i];
        S[i]=temp;
    }
    void permutate(string &S, vector<string> &v, int i)
    {
            
        cout<<"%%";
        int j=i;
        cout<<"%%";
        for(j=i;j<S.length();j++)
        {
            swap(S,i,j);
            permutate(S,v,i+1);
            swap(S,i,j);
        cout<<"%%";
        }
        if(i==S.length())
        {
            cout<<"$$"<<" ";
            v.push_back(S);
        }
    }
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> v;
		    int i=0;
		    permutate(S,v,i);
		    sort(v.begin(),v.end());
		    return v;
		}
		
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends
