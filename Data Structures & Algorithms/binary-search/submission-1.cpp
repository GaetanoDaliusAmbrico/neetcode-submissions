class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid = 0;
        int min = 0;
        int max = nums.size()-1;

//        if (nums[min] == nums[max]){
//            return (nums[min] == target) ? 0 : -1;
//        } 

        while (max > min) {
            mid = min + (max - min)/2;
            if (nums[mid] > target) {
                max = mid-1;
            } else if (nums[mid] < target) {
                min = mid+1;
            } else {
                return mid;
            }
        }
        return (nums[min] == target) ? min : -1;
    };
};
