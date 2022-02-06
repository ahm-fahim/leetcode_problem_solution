#include <stdio.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int i, j, index = 0, length, temp;
    int *nums3;
    length = m + n;

    for (i = 0; i < nums1Size; i++)
    {
        nums3[index++] = nums1[i];
    }
    for (i = 0; i < nums2Size; i++)
    {
        nums3[index++] = nums2[i];
    }
    // new array
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (nums3[j] > nums3[j + 1])
            {
                temp = nums3[j];
                nums3[j] = nums3[j + 1];
                nums3[j + 1] = temp;
            }
        }
    }
    
}

int main()
{
    int arr1[] = {3, 2, 1}, arr2[] = {5, 4, 6};
    int s1 = 3, s2 = 3;
    int n = 3, m = 3;

    printf("%d", merge(arr1, s1, m, arr2, s2, n));

    return 0;
}