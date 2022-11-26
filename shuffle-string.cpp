class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int l = indices.size();
        string res=s;
        for(int i=0;i<l;i++){
            int x = indices[i];
            res[x] = s[i];

        }
        return res;
    }
};
