class Solution {
    public boolean validPalindrome(String s) {
        return validPalindrome(s, 0, s.length() - 1, false);
    }
    
    private boolean validPalindrome(String s, int left, int right, boolean hasDeleted) {
        while (left < right) {
            char sleft = s.charAt(left);
            char sright = s.charAt(right);
            if (sleft != sright) {
                if (hasDeleted) return false;
                return validPalindrome(s, left+1, right, true) 
                    || validPalindrome(s, left, right -1, true);
            }
            left++;
            right--;
        }
        return true;
    }
}
