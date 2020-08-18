/*
  Description : Find element that occur only once and rest occur twice.
  
*/

// Code
  #include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums;
        for(int i = 0; i<n; i++){
            int v;
            cin>>v;
            nums.push_back(v);
        }
        // if(n%2 == 0)cout<<0<<endl;
        int l = 0, r = n-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                cout<<nums[mid]<<endl;
                break;
            }
            else if(mid%2 == 0){
                if(nums[mid] == nums[mid+1])
                    l = mid+1;
                else
                    r = mid-1;
            }
            else{
                if(nums[mid] == nums[mid-1])
                    l = mid+1;
                else
                    r = mid-1;
            }
        }
        // code
    }
	
	return 0;
}
