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

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
