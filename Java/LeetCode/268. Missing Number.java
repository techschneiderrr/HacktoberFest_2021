class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum = (n * (n + 1)) / 2;
        int cal_Sum = 0;
        for (int i : nums) {
            cal_Sum += i;
        }
        return sum - cal_Sum;
    }
}
