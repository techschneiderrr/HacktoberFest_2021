class Solution {
    public int balancedStringSplit(String s) {
        int count = 0;
        int R=0;
        int L=0;
        char arr[] = s.toCharArray();
        for(char i:arr){
            if(i=='R') 
                R++;
            if(i=='L') 
                L++;
            if(R == L){
                count++;
                R=0;
                L=0;
            }
        }
        return count;
    }
}
