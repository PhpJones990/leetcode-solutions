int removeElement(int* nums, int numsSize, int val) {
    int k = 0; 
    int l = 0, r = numsSize; 
    while (l < r) 
    {
        if (nums[l] == val) 
        {
            nums[l] = nums[r-1]; 
            r--; 
        }
        else 
        {
            l++; 
        } 
    }
    return r; 

}