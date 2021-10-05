#include<bits/stdc++.h>
#define ll long long

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0 || s.size()==1)return s.size();
        int start=-1, max_len=1;
        vector<int> v(256, -1);
        for(int i=0; i<s.size(); i++)
        {
            if(v[s[i]]>start)start=v[s[i]];
            v[s[i]]=i;
            max_len=max(max_len, i-start);
        }
        return max_len;
    }
};

int main()
{
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.lengthOfLongestSubstring(s);
    return 0;
}
