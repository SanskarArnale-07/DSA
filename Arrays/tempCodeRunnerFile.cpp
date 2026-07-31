#include<bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			int length = nums.size();
            if ((length == 0) || (length == 1)){
                return true;
            for(int i=0;i<length-1;i++)
            {
                if (nums[i] > nums[i+1]){
                    return false;
                }
            }
            return true;
            }
		}
    };
