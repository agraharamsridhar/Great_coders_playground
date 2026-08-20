/* We used sieve of eratosthenes algorithm */

/* My logic 
class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool> all(n,1);
        int count =n;
        if(n <= 2)
        {
            return 0;
        }
        all[1] = 0;
        all[0] = 0;
        count = count-2;
        for(int i =2;i*i<n;i++)
        {
            if(all[i])
            {
                for(int j=i*i;j<n; j=j+i)
                {
                        all[j] = 0;
                        count--;
                }
            }
        }
        return count;
    }
};
*/

// And the best logic is 

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        // Only store odd numbers.
        // index i represents number (2*i + 1)
        int size = n / 2;
        vector<bool> isPrime(size, true);

        // 1 is not prime
        isPrime[0] = false;

        for (int i = 3; i * i < n; i += 2) {
            if (isPrime[i / 2]) {
                // Start at i*i.
                // Jump by 2*i to skip even multiples.
                for (int j = i * i; j < n; j += 2 * i) {
                    isPrime[j / 2] = false;
                }
            }
        }

        // 2 is prime + count remaining odd primes
        int count = 1;

        for (int i = 3; i < n; i += 2) {
            if (isPrime[i / 2])
                count++;
        }

        return count;
    }
};
