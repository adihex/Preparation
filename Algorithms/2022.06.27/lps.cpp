#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
string longestPalindrome(string s) {
        int left,right;
        string ans="";
        int currlen=0;
        for(int i=0;i<s.length();i++)
        {
        //For odd length substrings
            left=i;
            right=i;
            while(left>=0 && right<s.length() && s[left]==s[right])
            {
              if((right-left+1)>=currlen)
              {
                  ans=s.substr(left,right-left+1);
                  currlen=right-left+1;
              }
                  left--;
                  right++;
            }
            left=i;
            right=i+1;
            while(left>=0 && right<s.length() && s[left]==s[right])
            {
              if((right-left+1)>=currlen)
              {
                  ans=s.substr(left,right-left+1);
                  currlen=right-left+1;
              }
                  left--;
                  right++;
            }
        }
        return ans;
    }
int main()
{
  string s="babad";
  cout<<longestPalindrome(s);
  return 0;
}

