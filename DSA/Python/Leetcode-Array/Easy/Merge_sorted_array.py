def merge_sorted_array(nums1 , nums2):
    i = 3-1
    j = 3-1
    k = 5

    while(i >=0 and j >=0 ):
        if(nums1[i] > nums2[j]):
            nums1[k] = nums1[i]
            i -=1  
        else:
            nums1[k] = nums2[j]
            j -= 1 
    
        k -=1
    
    while(j >=0):
        nums1[k] =nums2[j]
        j -=1
        k -=1 
    

    print(nums1)



nums1  = [1,2,8,0,0,0]
nums2 = [3,5,6]


merge_sorted_array(nums1 , nums2)