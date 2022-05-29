#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
  vector<int> ans;
  int arr[1000];
  int n;
  int s,f=0,l=0;
  int sum=0;
  cout<<"Enter n\n";
  cin>>n;
  cout<<"Enter s\n";
  cin>>s;
  cout<<"Enter the elements of the array\n";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
    if(sum<s)
      l++;
    else if(sum>s)
    {
      while(sum>s)
      {
        sum-=arr[f];
        f++;
      }
    }
    if(s==sum)
    {
      ans.push_back(f);
      ans.push_back(l);
      break;
    }
  }  
  cout<<f<<" "<<l;
  return 0;
}


