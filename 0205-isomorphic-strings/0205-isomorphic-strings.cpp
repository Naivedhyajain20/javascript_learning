class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        
        vector<int>v(150,1000);

        for(int i=0 ;i<s.size(); i++){
            int idx = (int)s[i];
            if(v[idx] == 1000) v[idx] = s[i] - t[i];
            else if((s[i] - t[i]) != v[idx]) return false ;
        }

        // vector ko vapas khali karke t ke liye uper abhi s ke liye hui hai

        for(int i=0;i<150;i++){
            v[i] = 1000;
        }

        for(int i=0 ;i<t.size();i++){
            int idx = (int)t[i];
            if(v[idx] == 1000) v[idx] = t[i] - s[i];
            else if((t[i] - s[i]) != v[idx]) return false ;
        }

        return true;
    }
};