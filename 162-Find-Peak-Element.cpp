// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0 ; i < nums.size() ; i++){
//             if(( i == 0 || nums[i] > nums [i-1]) && ( i == n-1 || nums[i] > nums[i+1] ))
//             return i;
//         }
//         return -1;
        
//     }
// };
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }
};