//在一个有序数组中寻找指定数，返回数的下标。
//指定数为target,有序数组是一个vector nums.

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int target=11; 
    vector<int>nums={1,3,6,11,23,45};
    int low = 0, high = nums.size() - 1;   
    
    //该循环出去只有两个可能，第一个是找到了下标并且返回，第二个就是让left>mid，且只大1
    while (low <= high)
    {
        int mid = (high - low) / 2 + low;
        int num = nums[mid];
        if (num == target)
        {
            cout<<mid;
            return 0;
        }
       if (num > target)
        {
            high = mid - 1; //减一是必须操作，为了让high和low相等后下一次循环让high<low
        }
        if (num < target)
        {
            low = mid + 1;
        }
    }
    cout<<"not find"<<endl;
    return 0;
}
