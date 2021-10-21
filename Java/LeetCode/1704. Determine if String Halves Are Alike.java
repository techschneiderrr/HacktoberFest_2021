class Solution {
    public boolean halvesAreAlike(String s) {
        s = s.toLowerCase();
        int i = 0, j = s.length() / 2, c1 = 0, c2 = 0;
        while(j < s.length()) {
            char c = s.charAt(i), d = s.charAt(j);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                c1++;
            if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u')
                c2++;
            i++;
            j++;
        }
        return c1 == c2;
    }
}
