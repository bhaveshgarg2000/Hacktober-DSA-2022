class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> result;
        for(int n :nums){
            n = abs(n);
            if(nums[n-1]>0){
                nums[n-1]*= -1;
            }
            else{
                result.push_back(n);
            }
        }
        return result;
    }
};



// Array Sort and then find approach


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 1;
        for(;i<nums.size();i++){
        if(nums[i] == nums[i+1]){
            return nums[i];
        }
    }
        return nums[i];
}
};