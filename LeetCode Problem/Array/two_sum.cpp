class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int>ump;

        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];
            if(ump.find(need) != ump.end()){
                return {ump[need],i};
            }
            ump[nums[i]] = i;
        }
        return {};
        // int left = 0;
        // int right = nums.size()-1;
        
        // while(right>left){
        //     int sum = nums[left] + nums[right];
        //     if(sum == target){
        //         return {left,right};
        //     }
        //     else if(sum > target){
        //         right--;
        //     }
        //     else{
        //         left++;
        //     }
        // }
        // return {};
    }
};