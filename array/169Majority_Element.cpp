class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,num=0;
        for(int i=0;i<nums.size();i++)//Boyer-Moore algorithm
        {
            if(freq==0)num=nums[i];
            if(num==nums[i])freq++;
            else freq--;
        }
        return num;
    }
};
