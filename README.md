# Find Median of Two Sorted Arrays
This program implements a function findMedianSortedArrays to find the median of two sorted arrays efficiently by merging them.

# Problem Statement
Given two sorted arrays nums1 and nums2 of sizes nums1Size and nums2Size, the task is to merge them into a single sorted array and determine the median value.

# Example:
Input:

nums1 = [1, 3], nums2 = [2]
Output:
Median = 2.0
Input:

nums1 = [1, 2], nums2 = [3, 4]
Output:
Median = 2.5
Function Signature

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);
Parameters:
nums1: Pointer to the first sorted array.
nums1Size: Size of the first array.
nums2: Pointer to the second sorted array.
nums2Size: Size of the second array.
Returns:
double: The median of the two sorted arrays.
How It Works
Merge Step:
The two input arrays are merged into a single sorted array using a two-pointer approach.

Median Calculation:

If the total size is odd, the median is the middle element.
If the total size is even, the median is the average of the two middle elements.
Memory Management:
Dynamic memory (malloc) is used to store the merged array, and it is freed after computing the result.

Compilation Instructions
To compile the code, use any C compiler, such as gcc.


gcc -o find_median find_median.c
Here, find_median.c is the name of your source file.

Usage
You can call the function findMedianSortedArrays within a main function, like this:

c

#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);

int main() {
    int nums1[] = {1, 2};
    int nums2[] = {3, 4};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);

    double median = findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);
    printf("The median is: %.2f\n", median);

    return 0;
}
Output:
csharp
Copy code
The median is: 2.50
Memory and Time Complexity
Time Complexity: 

O(n+m), where 

m are the sizes of the two arrays.
Space Complexity: 

O(n+m), as we allocate a new array to merge both inputs.
