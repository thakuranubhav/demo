//Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); ++i) {
        if (num_map.find(nums[i]) != num_map.end() && i - num_map[nums[i]] <= k) {
            return true;
        }
        num_map[nums[i]] = i;
    }
    return false;
}

    
};