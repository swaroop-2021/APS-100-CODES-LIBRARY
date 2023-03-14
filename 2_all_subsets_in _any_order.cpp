#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<vector<int> > subsets(vector<int>& nums)
    {
        int i,j,n=nums.size();
        vector<vector<int>> vv;
        for(i=0;i<(1<<n);i++)
        {
            vector<int>v;
            for(j=0;j<n;j++)
            {
                if(i & (1<<j))
                    v.push_back(nums[j]);
            }
            vv.push_back(v);
        }
        return vv;
    }
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n;
		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);
		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}	
	}
	return 0;
}