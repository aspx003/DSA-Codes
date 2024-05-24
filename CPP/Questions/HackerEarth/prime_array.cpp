#include <bits/stdc++.h> 
using namespace std;

bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
    
    if (n == 2 || n == 3) 
        return true; 
    
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    
    for (int i = 5; i <= sqrt(n); i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
}

int factorial(int n) 
{ 
     if(n == 0) {
        return 1; 
     }
    int i = n, fact = 1; 
    while (n / i != n) { 
        fact = fact * i; 
        i--; 
    } 
    return fact; 
} 

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int ones = 0, primes = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) ones++;
            if(isPrime(arr[i])) {
                primes++;
            }
        }

        if(ones == 0) {
            cout << 0 << "\n";
            continue;
        }

        int ans = (factorial(ones) / factorial(ones - 2) / 2) * primes;
        cout << ans << "\n";
    }

    return 0; 
}