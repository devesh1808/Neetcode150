void func(int n, string s, vector<string> &ans){
        if(s.length()==n){
            ans.push_back(s);
            return;
        }
        func(n, s+'0', ans);
        if(s[s.length()-1]!='1' || s.length()==0) func(n, s+'1', ans);
    }
    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string> ans;
        string s;
        func(num, s, ans);
        return ans;
    }