// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int totalsum = 0;
//         for(int i = 0 ; i < nums.size() ; i++){
//             totalsum += nums[i];
//         }
//         int left = 0;
//         for(int i = 0 ; i < nums.size() ; i++){
//             int right = totalsum - left - nums[i];

//             if(right == left){
//                 return i;
//             }
//             left += nums[i];
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int leftSum = 0;
            int rightSum = 0;

            // First loop: calculate left sum
            for (int j = 0; j < i; j++) {
                leftSum += nums[j];
            }

            // Second loop: calculate right sum
            for (int j = i + 1; j < n; j++) {
                rightSum += nums[j];
            }

            if (leftSum == rightSum) {
                return i;
            }
        }

        return -1;
    }
};
