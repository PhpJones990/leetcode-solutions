void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int a = m - 1; 
    int b = n - 1; 
    int w = nums1Size - 1; 

    while (w >= 0 && a >= 0 && b >= 0) 
    {
        if (nums1[a] > nums2[b]) nums1[w--] = nums1[a--]; 
        else nums1[w--] = nums2[b--]; 
    }
    
    if (b > a) 
    {
        while (b >= 0) nums1[w--] = nums2[b--]; 
    }
}