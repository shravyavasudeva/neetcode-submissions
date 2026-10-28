class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> checked;
        for (int n : nums){
            if (checked.count(n)){
                return true;
            }
            checked.insert(n);
        }
        return false;
        
    }
};