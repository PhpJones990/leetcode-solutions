/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *twoSum = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                twoSum[0] = i;
                twoSum[1] = j;
                return twoSum;
            }
        }
    }
    twoSum[0] = 0;
    twoSum[1] = 0;
    return twoSum;
}