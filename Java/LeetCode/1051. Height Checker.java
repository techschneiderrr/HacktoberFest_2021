class Solution {
    public int heightChecker(int[] heights) {
        int count = 0;
        int[] expected = Arrays.copyOf(heights, heights.length);
        Arrays.sort(expected);
        for(int i = 0; i < heights.length; i++){
            if(expected[i] != heights[i]){
                count++;
            }
        }
        return count;
    }
}
