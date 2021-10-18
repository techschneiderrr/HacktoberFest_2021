class fibonacci{

// 0 Solving using iterative
    // time complexity :O(N)
    // Space complexity or auxillary space :O(1)
//     static void fib(int n){
//         int num1=0,num2=1;
//         int counter=0;

//         while(counter<n){
//             System.out.print(num1+" ");

//             //swap
//             int num3=num2+num1;
//             num1=num2;
//             num2=num3;
//             counter+=1;
//         }
//     }
// // 2 Solving using recursion
    // time complexity :O(2^N)
    // Space complexity or auxillary space :O(1)
    // static int fibo(int n){
    //     if(n<=2)  return 1;
    //     return fibo(n-1) + fibo(n-2);
    // }
    // public static void main(String[] args){
    //     int N=50;
        // System.out.println(fib(N));
        // for(int i=0; i<N;i++){
        //     System.out.println(fib(i)+" ");
        // } 
    // }

// 3 solving using dynamic programming by storing the calculated in a array
    
    // time complexity :O(N)
    // Space complexity or auxillary space :O(N)

    static int fib(int n){
        int f[] =new int[n + 2];
        int i;

        f[0] =0;
        f[1] =1;

        for(i=2;i<=n;i++){
            f[i]=f[i-1] + f[i-2];
        }

        return f[n];
    }
    public static void main(String[] args){
        int N=50;
        System.out.println(fib(N));
    }
}
