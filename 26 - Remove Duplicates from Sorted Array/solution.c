int removeDuplicates(int* nums, int numsSize) {
    int uniqueSize = 1; 

    int uniquePointer = 1; 
    int recordedNumber = nums[0]; 
    for (int i = 1; i < numsSize; i++) 
    {
        if (recordedNumber != nums[i]) 
        {
            nums[uniquePointer++] = nums[i]; 
            recordedNumber = nums[i]; 
            uniqueSize++; 
        } 
    }
    return uniqueSize; 
}