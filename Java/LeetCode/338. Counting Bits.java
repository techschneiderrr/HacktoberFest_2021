class Solution {
    public int[] countBits(int n) {
        int[] answer = new int[n+1];
        for(int i = 0; i <= n; i++) {
            int num = i;
            int count = 0;
            while(num > 0) {
                int rSetBitMask = num & -num;
                num ^= rSetBitMask;
                count++;
            }
            answer[i] = count;
        }
        return answer;
    }
}
