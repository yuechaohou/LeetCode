class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Found;
        vector<int> result;
        for(unsigned i=0; i<nums.size(); i++){
            int ToFound = target-nums[i];
            if(Found.find(ToFound)!=Found.end()){
                  result.push_back(i);
                  result.push_back(Found[ToFound]);
                  break;
            }
            Found[nums[i]]= i;
        }
        return result;
    }
};