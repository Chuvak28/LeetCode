#include <iostream>
#include <vector>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> mult;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
            {
                mult.push_back(i);
                mult.push_back(j);
                return mult;
            }
        }
    }
    return mult;
}
int main()
{
    vector<int> numbers;
    int k=9;
    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(15);

    twoSum(numbers,k);

    return 0;
}
