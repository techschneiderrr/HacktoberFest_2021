class Solution {
    public int[] shuffle(int[] nums, int n) {
        int ar[] = new int[2*n];
        int k=0;
        for(int i=0,j=n;i<n;i++,j++){
            ar[k++]=nums[i];
            ar[k++]=nums[j];
        }
        return ar;
    }
}
