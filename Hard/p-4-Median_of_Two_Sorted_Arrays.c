#include <stdio.h>

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int i, j, nums3Size, index = 0;
    int *nums3;

    // input *nums1
    scanf("%d", &nums1Size);

    for (i = 0; i < nums1Size; i++)
    {
        scanf("%d", nums1[i]);
    }

    // input *nums2
    scanf("%d", &nums2Size);

    for (i = 0; i < nums2Size; i++)
    {
        scanf("%d", nums2[i]);
    }

    // merge nums1 to  nums3
    for (i = 0; i < nums1Size; i++)
    {
        nums3[index++] = nums1[i];
    }
    // merge nums2 to  nums3
    for (i = 0; i < nums1Size; i++)
    {
        nums3[index++] = nums2[i];
    }

    // 3rd array
    nums3Size = nums1Size + nums2Size;

    for (i = 0; i < nums3Size; i++)
    {
        return nums3[i];
    }
}

int main()
{   
    int *arr1[3] = {1,3,4}, *arr2[3] = {5,7,9};
    int output;
    output = findMedianSortedArrays(arr1,3,arr2,3);

    printf("%d",output);

    return 0;
}