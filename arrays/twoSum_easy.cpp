// Leetcode Two sum problem
// Brute force approach - Time complexity- O(n^2), SC- O(1)
// Using Hashmaps - TC - O(n), SC - O(n);

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class TwoSum
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        // Bruteforce
        //     int a = 0;
        //     int b = 0;
        //          or
        //      vector<int> v;

        //     for (int i = 0; i < nums.size() - 1; i++)
        //     {
        //         for (int j = i + 1; j < nums.size(); j++)
        //         {
        //             if (nums[i] + nums[j] == target)
        //             {
        //                 a = i;
        //                 b = j;
        //                  or
        //                 v.push_back(i);
        //                 v.push_back(j);
        //             }
        //         }
        //     }
        //     return {a, b};

        // using maps
        vector<int> ans;
        unordered_map<int, int> hash_table;
        for (int i = 0; i < nums.size(); i++)
        {
            int second_integer = target - nums.at(i);

            if (hash_table.find(second_integer) != hash_table.end())
            {
                ans.push_back(i);
                ans.push_back(hash_table[second_integer]);
                break;
            }
            else
            {
                hash_table[nums[i]] = i;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}