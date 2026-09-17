class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int k = 0;

        for(auto i : mp) {
            nums[k] = i.first;
            k++;
        }

        sort(nums.begin(), nums.begin() + k);

        return k;
    }
};