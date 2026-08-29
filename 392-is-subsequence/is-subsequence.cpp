class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        int i=0,j=0;
        while(i<n && j<m){
            if(s[i]==t[j]){
                j++;
                i++;
            }
            else{
                j++;
            }
        }
        if(i==n){
            return 1;
        }
        else{
            return 0;
        }
    }
};