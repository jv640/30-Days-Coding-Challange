// Problem  : Same as of 3 sum here just instead of four we are asked four.
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;
        set<pair<pair<int,int>, int>> s;
        for(int i = 0; i<n-3; i++){
            for(int j = i+1; j<n-2;j++){
                vector<int> v;
                int low = j+1; 
                int high = n-1;
                while(low<high){
                    if(nums[low] + nums[high] + nums[i] + nums[j] == target && s.find(make_pair(make_pair(nums[i], nums[j]), nums[low])) == s.end()){
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[low]);
                        v.push_back(nums[high]);
                        s.insert(make_pair(make_pair(nums[i], nums[j]), nums[low]));
                        // break;
                        low++;
                        high--;
                        if(v.size()!=0)
                            result.push_back(v);
                        v.clear();
                    }
                    else if(nums[low] + nums[high] + nums[i] + nums[j] > target)
                        high--;
                    else
                        low++;

                }
            }
        }
        return result;
    }
    
/*
  The main catch here is we can calculate k sum by looping on k and make recursive calls to k-1 until k==2 when k = 2 you apply two sum formula/
*/
