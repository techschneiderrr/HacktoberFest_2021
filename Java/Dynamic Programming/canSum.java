class  canSum{

//Method 1 Reccursion
  // time complexity :O(n^m)
  // Space complexity or auxillary space :O(m) 

    // public static Boolean returnBool(int targetSum, int[] numbers){
    //     if(targetSum == 0) return true;
    //     if(targetSum <  0) return false;

    //     for(int num :numbers){
    //         int remainder =targetSum - num;
    //         // System.out.println(remainder);
    //         if(returnBool(remainder,numbers) == true){
    //             // System.out.println(remainder+"h");
    //             return true;
    //         }
    //     }
    //     return false;
    // }
//Method2 
    // time complexity :O(n^2)
    // Space complexity or auxillary space :O(m*n) 

    public static Boolean returnBool(int targetSum, int[] numbers){
        int n=numbers.length;//3
        Boolean subset[][] = new Boolean[targetSum+1][n+1];

        for(int i=0;i<=n;i++){
            subset[0][i]=true;//{00,01,02,03..} all are true
        }

        for(int i=1;i<=targetSum;i++){
            subset[i][0]=false;//{10,20,30,40,50,60,70} all will be false
        }
        
        for(int i=1;i<=targetSum;i++){
            for(int j=1;j<=n;j++){
                subset[i][j]=subset[i][j-1];
                if(i >=numbers[j-1]){
                    subset[i][j]=subset[i][j] || subset[i-numbers[j-1]][j-1];
                    // System.out.println("subset["+i+"]["+j+"] = "+subset[i][j]);
                }
            }
        }
        return subset[targetSum][n];

    }

    public static void main(String[] args){

        System.out.println("can sum :"+returnBool(7,new int[] {2,3,4}));
        // System.out.println(returnBool(900,new int[] {2,5,4}));
        // System.out.println(returnBool(7,new int[] {1,1}));
        // System.out.println(returnBool(11901,new int[] {6,9,4,2,234,643,2}));

    }
}