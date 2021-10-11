
import java.util.*;

class myHash{
    int[] arr;
    int cap,size;
    myHash(int x){
        cap =x;
        size=0;
        arr = new int[x];
        for(int i=0;i<cap;i++){
            arr[i] = -1;
        }
    }
    public  int hash(int key){
        return key % cap;
    }
    boolean search(int key){
        int h = key%cap;
        int i = h;
        while (arr[i]!=-1){
            if(arr[i]==key)
                return true;
            i = (i+1)%cap;
            if(i==h)
                return false;
        }
        return false;
    }
    boolean insert(int key){
        if(size==cap)
            return false;
        int i = key%cap;
        while (arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)      // -2 for the deleted element
            i=(i+1)%cap;
        if(arr[i]==key)
            return false;
        else {
            arr[i] = key;
            size++;
            return true;
        }
    }
    boolean delete(int key){
        int h = key%cap;
        int i = h;
        while (arr[i]!=-1){
            if(arr[i]==key) {
                arr[i] = -2;
                return true;
            }
            i = (i+1)%cap;
            if(i==h)
                return false;
        }
        return false;
    }
}
public class hashing {
    public static void main(String[] args) {
        myHash ob = new myHash(7);
        ob.arr[ob.hash(57)] = 57;
        System.out.println(ob.search(57));
        ob.insert(36);
        System.out.println(Arrays.toString(ob.arr));
    }
}
