import primepackage.Primes;
import java.util.*;
class TwinPrimes{
	public static boolean is_Prime(long n) {

        if (n < 2) return false;

        for (int i = 2; i <= n / 2; i++) {

            if (n % i == 0) return false;
        }
        return true;
    }
	
	public static void main(String args[]){
		Primes p=new Primes();
		p.checkforprime();
		Scanner sc=new Scanner(System.in);
		System.out.println("enter until where you want the twin primes:");
		int s=sc.nextInt();
			for (int i = 2; i < s; i++) {

            if (is_Prime(i) && is_Prime(i + 2)) {
                System.out.printf("(%d, %d)\n", i, i + 2);
            }
}}}