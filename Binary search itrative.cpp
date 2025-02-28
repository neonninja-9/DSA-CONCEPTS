#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int BInSearch(vector<int> &nums, int target)
    {
        int st = 0, en = nums.size() - 1;
        while (st <= en)//instead of st<en we use st<=en because we want to check the last element also
        {
            int mid = st + (en - st) / 2; //avoid overflow
            if (nums[mid] > target)
            {
                en = mid - 1;
            }
            else if (nums[mid] < target)
            {
                st = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    cout << s.BInSearch(nums, target) << endl;
    return 0;
}