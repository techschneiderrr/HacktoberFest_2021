
import java.util.HashMap;  
class gridTraveler{
// method1 Recursion
//      time complexity :O(2^(m+n))
//     Space complexity or auxillary space :
    
    // static int gridTravel(int m,int n){
    //     if(m==1 && n==1) return 1;
    //     if(m==0 || n==0) return 0;

    //     return gridTravel(m-1,n)+gridTravel(m,n-1);
    // }
// method 2 solving using dynamic programming by storing the calculated in a array
    
    // time complexity :O(N^2)
    // Space complexity or auxillary space :O(N^2) 
    // static int gridTravel(int m, int n){
    //     int f[][] =new int[m + 2][n + 2];
    //     int i,j ;

    //      f[1][1] =1;

    //      for(i=1;i<=m;i++)
    //         for(j=1;j<=n;j++)
    //             if(i!=1||j!=1){
    //                 f[i][j]=f[i-1][j] + f[i][j-1];
    //             }
    //     return f[m][n];
    // }
// method 3 solving using dynamic programming by HashMap
    
    // time complexity :O(1)
    // Space complexity or auxillary space :O(N) 
    static int gridTravel(int m,int n, HashMap<String,Integer> memo){
        int N; 
        String key =m +","+n;
        boolean isKeyPresent= memo.containsKey(key);
        if(isKeyPresent) return memo.get(key);
        if(m==1 && n==1) return 1;
        if(m==0 || n==0) return 0;
        N=gridTravel(m-1,n,memo)+gridTravel(m,n-1,memo);
        memo.put(key,N);
        return memo.get(key);
    }
    
    public static void main(String[] args){
        HashMap<String,Integer> memo =new HashMap<>();
        System.out.println("No of Moves required to travel :"+gridTravel(2,2,memo));
        System.out.println("No of Moves required to travel :"+gridTravel(0,2,memo));
        System.out.println("No of Moves required to travel :"+gridTravel(5,2,memo));
        System.out.println("No of Moves required to travel :"+gridTravel(3,2,memo));
        System.out.println("No of Moves required to travel :"+gridTravel(10,10,memo));
         
    }
}