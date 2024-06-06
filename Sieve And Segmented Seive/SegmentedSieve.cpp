#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to perform segmented sieve
void segmentedSieve(int low, int high) {
    // Generate all primes up to sqrt(high)
    int limit = floor(sqrt(high)) + 1;
    vector<bool> isPrime(limit, true);
    vector<int> primes;
    
    for (int i = 2; i < limit; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * i; j < limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Initialize the sieve array for the current segment
    int n = high - low + 1;
    vector<bool> sieve(n, true);

    // Mark the multiples of primes found in the previous step
    for (int p : primes) {
        int start = max(p * p, (low + p - 1) / p * p); // Find the first multiple in the current segment
        for (int j = start; j <= high; j += p) {
            sieve[j - low] = false;
        }
    }

    // Print the primes in the current segment
    for (int i = 0; i < n; ++i) {
        if (sieve[i]) {
            cout << (low + i) << " ";
        }
    }
}

int main() {
    int low, high;
    cout << "Enter the range (low and high): ";
    cin >> low >> high;

    cout << "Prime numbers in the range [" << low << ", " << high << "] are:\n";
    segmentedSieve(low, high);

    return 0;
}
