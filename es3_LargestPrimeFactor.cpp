// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <iostream>

using namespace std;

int main(){
    unsigned long int num = 600851475143;

    long max_prime_factor = 0;
    for (long factor=2; factor<=num; factor++){
        while(num % factor== 0){
            num = num/factor;
            max_prime_factor = factor;
        }
    }
    cout << max_prime_factor <<endl;
    return 0;
}
