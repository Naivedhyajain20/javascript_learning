class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int odd = 0;
        for (int i = 0; i < nums1.size(); i++) {

            for (int i = 0; i < nums1.size(); i++) {
                if (nums1[i] % 2 != 0) {
                    odd = nums1[i];
                    break;
                }
            }
            if (nums1[i] % 2 == 0) {
                nums1[i] = nums1[i] - odd;
            }
        }
        return true;
    }
};