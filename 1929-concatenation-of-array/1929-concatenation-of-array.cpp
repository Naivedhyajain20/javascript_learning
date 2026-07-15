class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> key(2 * n);
        for(int i=0;i<key.size();i++){
            key[i] = nums[i%n];
        }
        return key;
    }
};