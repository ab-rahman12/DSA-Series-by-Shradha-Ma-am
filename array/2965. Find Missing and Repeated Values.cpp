class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                mp[grid[i][j]]++;
            }
        }
        int a,b;
        for(int i=1;i<=grid.size()*grid.size();i++)
        {
            if(mp[i]==0)a=i;
            if(mp[i]>1)b=i;
        }
        vector<int>ans;ans.push_back(b);
        ans.push_back(a);
        return ans;
    }
};
