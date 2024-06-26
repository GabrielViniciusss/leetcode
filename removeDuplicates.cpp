#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0;
        int j = 1;
        
        while (j < nums.size()) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        
        return i + 1; 
    }
};
      
int main(){
    
    Solution solution = Solution();
    
    vector <int> nums = {1,1};

    cout<<solution.removeDuplicates(nums);
    
    return 0;
}