#include <iostream>
#include <vector>
#include <cmath>
using std::vector;
/*
    Given two crystal balls that will break from a high enough distance.
    determine the exact spot in which it will break.
*/
int TwoCrystals(vector<bool> &breaks)
{
    int sqrt10 = sqrt(breaks.size());
    int i = sqrt10;
    for (; i < breaks.size(); i += sqrt10)
    {
        if (breaks[i])
        {
            break;
        }
    }
    i -= sqrt10;
    for (int j = 0; j <= sqrt10 && i < breaks.size(); j++, i++)
    {
        if (breaks[i])
        {
            return i;
        }
    }
    return -1;
}
bool LinearSearch(vector<int> haystack, int key)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] = key)
        {
            return true;
        }
    }
    return false;
}

int BinarySearch(vector<int> nums, int target)
{
    int lo = 0;
    int hi = nums.size();
    while (lo < hi)
    {
        int mid = floor(lo + (hi - lo) / 2);
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    return -1;
}

int main()
{
    vector<bool> breaks{false, true, true, true, true, true, true, true, true};
    TwoCrystals(breaks);
    return 0;
}