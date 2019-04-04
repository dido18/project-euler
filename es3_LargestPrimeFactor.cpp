// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <iostream>

using namespace std;

int main(){
    unsigned long int num = 600851475143;

    long max_prime_factor = 0;
    for (long i=2; i<=num; i++){
        while(num %i == 0){
            num = num/i;
            max_prime_factor = i;
        }
    }
    cout << max_prime_factor <<endl;
    return 0;
}
