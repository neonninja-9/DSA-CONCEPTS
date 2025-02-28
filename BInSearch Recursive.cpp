#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    int Binsearch(vector<int>& nums , int target , int left , int right ){
        if(left > right) return -1;
        int mid = left + (right - left)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) return Binsearch(nums , target , left , mid-1);
        else return Binsearch(nums , target , mid+1 , right);
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    cout << s.Binsearch(nums, target , 0 , nums.size()-1) << endl;
    return 0;
}