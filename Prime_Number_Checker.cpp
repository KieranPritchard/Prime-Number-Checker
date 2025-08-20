#include <iostream>
#include <cstdlib>

using namespace std;

bool is_prime_number(int number){
    int counter = 0;
    
    if(number <= 1){
        return false;
    } else{
        for (int i = 1; i <= number; i++) {
            if (number % i == 0)
                counter++;
        }
        if (counter > 2){
            return false; 
        } else{
            return true;
        }
    }
}

void check_if_prime(){
    int input;
    cout << "Please input your number for checking: ";
    cin >> input;

    bool is_number_prime = is_prime_number(input);

    if(is_number_prime = true){
        cout << "Your number is a prime number.";
    } else {
        cout << "Your number is not a prime number.";
    }
}

void make_range_of_primes(){
    int input;
    cout << "Please input your number for checking: ";
    cin >> input;

    for(int i; i < input; i++){
        bool is_number_prime = is_prime_number(input);

        if(is_number_prime == true){
            cout << input;
        } else{
            continue;
        }
    }
}

int main(){
    int input;
    while(true){
        cout << "Please select an option:";
        cout << "(1) Check for a prime number.";
        cout << "(2) Make a range of prime numbers.";
        cout << "Please input your option";
        cin >> input;

        if(input == 1){
            check_if_prime();
        } else if(input == 2){
            make_range_of_primes();
        } else if(input == 3){
            break;
        } else{
            cout << "invaild option";
        }
    }

    return 0;
}
