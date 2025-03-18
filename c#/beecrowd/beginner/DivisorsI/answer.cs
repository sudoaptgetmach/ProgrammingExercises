using System; 

class URI {

    static void Main(string[] args) { 
        int n;
        n = Convert.ToInt32(Console.ReadLine());
        
        for (int i = 1; i<=n; i++) {
            if (n%i==0) {
                Console.WriteLine(i);
            }
        }
    }
}
