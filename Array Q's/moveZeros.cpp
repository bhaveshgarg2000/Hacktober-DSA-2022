class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int nonZero = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                // SWApping nonzero element towards left of the array
                swap(nums[j], nums[nonZero]);
                nonZero++;
            }
        }
    }
};