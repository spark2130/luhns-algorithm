# Credit Card Validation using Luhn's Algorithm

Luhn's algorithm is a checksum formula used to validate credit card numbers' syntax. This repository contains a simple C program that demonstrates how to use Luhn's algorithm to check if a credit card number is valid or not.

## How Luhn's Algorithm Works

According to Luhn's algorithm, you can determine if a credit card number is valid (syntactically) by following these steps:

1. Starting from the number's second-to-last digit, multiply every other digit by 2.
2. Add the individual digits of the products obtained in Step 1 together.
3. Add the sum from step 2 to the sum of the digits that weren't multiplied by 2.
4. If the total's last digit is 0 (or, more formally, if the total modulo 10 is congruent to 0), the credit card number is considered valid.

## Usage

1. Clone this repository to your local machine using `git clone`.

2. Navigate to the repository's root directory.

3. Compile the `credit.c` C program using a C compiler.


## Note
This program assumes that the credit card number contains only numeric digits and does not include spaces or other characters. If you want to handle additional input formats, you may need to modify the code accordingly.

## License
This project is licensed under the MIT License.
