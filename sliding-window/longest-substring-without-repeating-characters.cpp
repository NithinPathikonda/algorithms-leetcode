class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,n=s.size(),maxi=0;
        unordered_map<char,int> mpp;
        while(r<n)
        {
            if(mpp.find(s[r])==mpp.end())
            {
                maxi=max(maxi,r-l+1);
                mpp[s[r]]=r;
                r++;
            }
            else
            {
                mpp.erase(s[l++]);
            }
        }
        return maxi;
    }
};
