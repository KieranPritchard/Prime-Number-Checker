#include <iostream>
#include <cstdlib>

using namespace std;

int check_if_prime(){
    int input;
    cout << "Please input your number for checking: ";
    cin >> input;

    if(input == input % input && input % 1){
        cout << "Your number is a prime number.";
    } else {
        cout << "Your number is not a prime number.";
    }
}

int make_range_of_primes(){
    int input;
    cout << "Please input your number for checking: ";
    cin >> input;

    for(int i; i < input; i++){
        if(i == i % i && i % 1){
            cout << i << endl;
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
