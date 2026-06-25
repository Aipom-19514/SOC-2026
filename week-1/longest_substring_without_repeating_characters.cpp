class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> con;
        int l=0,n=s.size(),ans=0;
        for(int r=0;r<n;r++){
            while(con.count(s[r])){
                con.erase(s[l]);l++;
            }
            con.insert(s[r]);
            ans=max(ans, r-l+1);
        }
        return ans;
    }
};