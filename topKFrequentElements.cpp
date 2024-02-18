 //Sol 1 : O(NlogN)
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int ele:nums) mp[ele]++;
        priority_queue<pair<int, int>> pq;
        for(auto it:mp){
            pq.push({it.second, it.first});
        }
        vector<int> ans;
        while(k--){
            auto it = pq.top();
            pq.pop();
            ans.push_back(it.second);
        }
        return ans;
    }

    