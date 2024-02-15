
//using unordered set
bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int ele:nums) s.insert(ele);
        return nums.size()>s.size();
}


//using unordered map
bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int ele:nums) mp[ele]++;
        for(auto it:mp){
            if(it.second>1) return true;
        }
        return false;
}