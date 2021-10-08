import java.util.Random;

class Bubble_Sort{
    public static void sorter(int [] arr) {
        for (int i = 0; i < arr.length; i++){
			for (int j = i + 1; j < arr.length; j++){
				if (arr[j] < arr[i]) {
					arr[i] = arr[i]^arr[j];
					arr[j] = arr[i]^arr[j];
					arr[i] = arr[i]^arr[j];
				}
			}
    }
}

public static void printer(int [] arr) {
    for(int i =0;i<arr.length;i++)
    System.out.print(arr[i] + " ");
    System.out.println(" ");
    
}

	public static void main(String[] args){

		Random rand = new Random();
		int n = rand.nextInt(1000);
		int [] arr = new int[n];

		for(int i =0;i<n;i++)
		arr[i] = rand.nextInt(10000);
 
        printer(arr);
		sorter(arr);
        printer(arr);
		}
    }
