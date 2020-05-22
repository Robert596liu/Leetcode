class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> s;
        for(int i = 0; i < strs.size(); i++){
            string key = strs[i];
            sort(strs[i].begin(), strs[i].end());
            if(s.find(strs[i]) == s.end()){
                vector<string> newvec;
                newvec.push_back(key);
                s[strs[i]] = newvec;
            }
            else
                s[strs[i]].push_back(key);
        }
        vector<vector<string>> ret;
        map<string, vector<string>>::iterator it;
        for(it = s.begin(); it != s.end(); it++){
            ret.push_back(it->second);
        }
        return ret;
    }
};
