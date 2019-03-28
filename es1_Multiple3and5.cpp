
// Multiples of 3 and 5
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
// The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.

#include<iostream>
#include <cstlib>

using namespace std;

int main(){
    int sum_multiple_three_or_five = 0;

    for (int i=0; i < 1000; i++){
        if (is_multiple_of_three_or_five(i))
            sum_multiple_three_or_five += i;
            
    }
    cout << sum_multiple_three_or_five << endl;

    return 0;
}

bool is_multiple_of_three_or_five(int i){
    return  i%3 == 0 or i%5 == 0;
}