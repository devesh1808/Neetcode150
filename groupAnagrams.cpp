vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> mp;
        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto it:mp){
            vector<int> v = it.second;
            vector<string> temp;
            for(int i=0; i<v.size(); i++){
                temp.push_back(strs[v[i]]);
            }
            ans.push_back(temp);
        }
        return ans;
    }