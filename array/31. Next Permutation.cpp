class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find the pivot
        int pivot=-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                pivot=i;break;
            }
        }
        if(pivot==-1)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        //swap with next larger element
        for(int i=nums.size()-1;i>pivot;i--)
        {
            if(nums[pivot]<nums[i])
            {
                swap(nums[pivot],nums[i]);break;
            }
        }
        //reverse the pivot+1 to nums.size()-1
        reverse(nums.begin()+pivot+1,nums.end());
        return ;

    }
};
