double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
        int i = 0, j = 0;
    int k = 0;
    int* ans = (int*)malloc((nums1Size + nums2Size) * sizeof(int));

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            ans[k++] = nums1[i++];
        } else {
            ans[k++] = nums2[j++];
        }
    }

    while (i < nums1Size) {
        ans[k++] = nums1[i++];
    }

    while (j < nums2Size) {
        ans[k++] = nums2[j++];
    }

    double median;
    int totalSize = nums1Size + nums2Size;
    if (totalSize % 2 != 0) {
        median = (double) ans[totalSize / 2];
    } else {
        int x = totalSize / 2;
        double p = ans[x];
        double q = ans[x - 1];
        median = (p + q) / 2.0;
    }

    free(ans);
    return median;
}
