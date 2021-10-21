class Solution {
    public int maximum69Number (int num) {
        String str = Integer.toString(num);
        char[] num_str = str.toCharArray();

        for(int i = 0; i < str.length(); i++)
            if(num_str[i] == '6'){
                num_str[i] = '9';
                break;
            }
        String s = new String(num_str);
        return Integer.parseInt(s);
    }
}
