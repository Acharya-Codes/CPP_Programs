<<<<<<< HEAD
#include <iostream>
using namespace std;
int getDigit(const int number);
int sumOdd(const string cardNumber);
int sumEven(const string cardNumber);
int main() {
    string cardNumber;
    int result = 0;
    cout << "Enter your credit card number: " << "\n";
    cin >> cardNumber;
    result = sumOdd(cardNumber) + sumEven(cardNumber);

    if(result % 10 == 0){
        cout << "The card number is valid!" << "\n";
    }else{
        cout << "The card number is invalid" << "\n";
    }

    return 0;
}
int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOdd(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2){
        sum += cardNumber[i]-0;
        return sum;
    }
}
int sumEven(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2){
        sum += getDigit((cardNumber[i]-0) * 2);
        return sum;
    }
}
// Built on the basis of Luhn's Algorithm of validating credit card numbers!!

// Reverse the credit card number.
// Double every second digit, starting from the second digit.
// If the result is a two-digit number , sum the digits .
// Sum all the digits (both the doubled ones and the untouched ones).
=======
#include <iostream>
using namespace std;
int getDigit(const int number);
int sumOdd(const string cardNumber);
int sumEven(const string cardNumber);
int main() {
    string cardNumber;
    int result = 0;
    cout << "Enter your credit card number: " << "\n";
    cin >> cardNumber;
    result = sumOdd(cardNumber) + sumEven(cardNumber);

    if(result % 10 == 0){
        cout << "The card number is valid!" << "\n";
    }else{
        cout << "The card number is invalid" << "\n";
    }

    return 0;
}
int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOdd(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2){
        sum += cardNumber[i]-0;
        return sum;
    }
}
int sumEven(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2){
        sum += getDigit((cardNumber[i]-0) * 2);
        return sum;
    }
}
// Built on the basis of Luhn's Algorithm of validating credit card numbers!!

// Reverse the credit card number.
// Double every second digit, starting from the second digit.
// If the result is a two-digit number , sum the digits .
// Sum all the digits (both the doubled ones and the untouched ones).
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
// If the total modulo 10 equals 0 (i.e., it ends in 0), the number is mathematically valid.