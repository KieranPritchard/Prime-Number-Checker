#include <iostream>
#include <cstdlib>
#include <string>

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
    cout << "Please input your number for checking: " << endl;
    cin >> input;

    bool is_number_prime = is_prime_number(input);

    if(is_number_prime == true){
        cout << "Your number is a prime number." << endl;
    } else {
        cout << "Your number is not a prime number." << endl;
    }
}

void make_range_of_primes(){
    int input;
    cout << "Please input your number for highest in range: " << endl;
    cin >> input;
    cout << string(30, '=') << endl;

    for(int i=0; i != input; i++){
        bool is_number_prime = is_prime_number(i);

        if(is_number_prime == true){
            cout << i << endl;
        } else{
            continue;
        }
    }
}

int main(){
    int input;

    cout << string(30, '=') << endl;
    cout << "Prime Number Checker" << endl;

    while(true){
        cout << string(30, '=') << endl;
        cout << "Please select an option:" << endl;
        cout << "(1) Check for a prime number." << endl;
        cout << "(2) Make a range of prime numbers." << endl;
        cout << "(3) Quit" << endl;
        cout << "Please input your option: ";
        cin >> input;
        cout << string(30, '=') << endl;

        if(input == 1){
            check_if_prime();
        } else if(input == 2){
            make_range_of_primes();
        } else if(input == 3){
            break;
        } else{
            cout << "Invaild option." << endl;
        }
    }

    return 0;
}
