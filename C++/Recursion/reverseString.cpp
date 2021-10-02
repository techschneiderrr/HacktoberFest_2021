class Solution {
public:
    
    void reverse(vector<char>& s, int start, int end){
        if(start>=end){
            return ;
        }    
        
        swap(s[start],s[end]);
        reverse(s,start+1,end-1);
    }
    
    void reverseString(vector<char>& s) {
        return reverse(s,0,s.size()-1);   
    }
    
};