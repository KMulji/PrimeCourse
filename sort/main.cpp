#include <iostream>
#include <vector>

using std::vector;
void BubbleSort(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]>nums[j+1]){
                int temp = nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
}
int main()
{
    vector<int> n{9,8,7,6,5,4};
    BubbleSort(n);

    for(int i=0;i<n.size();i++){
        std::cout<<n[i]<<std::endl;
    }
    return 0;
}