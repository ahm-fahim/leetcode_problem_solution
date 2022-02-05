#include <stdio.h>

void twoSum(int nums[], int target)
{
    for (int i = 0; i <= nums; i++)
    {
        if (nums[i] <= target)
        {
            printf("%d, ", i);
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int nums[7] = {2, 7, 11, 15}, target;
    scanf("%d", &target);
    twoSum(nums,target);
}