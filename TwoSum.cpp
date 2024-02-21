#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int,int> map1;
    vector<int> index;

    for(int i=0 ; i<nums.size() ; i++)
    {
        int y=target-nums[i];
        if(map1.count(y))
        {
            index.push_back(map1[y]);
            index.push_back(i);
            break;
        }

        map1[nums[i]]=i;
    }

    return index;
}

int main()
{
    vector<int> vector1 = {1, 2, 3, 4, 5};

    int target=9;
    vector<int> index= twoSum(vector1, target);

     cout << "\nVector elements are at index : ";
    for (auto it = index.begin(); it != index.end(); it++)
        cout << *it << " ";
    return 0;
}