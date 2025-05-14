#Affine Cipher Implementation in C++
Overview
This C++ program implements the Affine Cipher, a monoalphabetic substitution cipher that encrypts and decrypts text using three keys (a, b, c). Users can:

Encrypt a message (option A)
Decrypt a message (option B)
Quit the program (option C)

It validates inputs to ensure positive keys and that a and c satisfy the modular inverse condition.
Features

Encryption: Converts plaintext to ciphertext using E(x) = (a*x + b) mod 26.
Decryption: Recovers plaintext using D(y) = c*(y - b) mod 26.
Input Handling: Supports spaces, ignores non-alphabetic characters, and converts input to uppercase.
User-Friendly Interface: Prompts for choices and validates inputs (A, B, C; positive integer keys).

Usage
Run the program and follow the prompts:

Select A to encrypt, B to decrypt, or C to quit.
Enter three positive integer keys (a, b, c), ensuring (a*c) mod 26 = 1.
Input a message (spaces preserved, non-alphabetic characters ignored).
View the encrypted or decrypted message.
Choose to continue (A or B) or quit (C).

Example:
welcome to the affine cipher , what do you want to do ? , choose A for cipher , B for decipher , C to quit
A
enter the three keys (a , b , c )
5 8 21
enter the message you want to cipher
Hello World
the encrypted messsage is: FJHLTKAF
do you want to cipher another message or decipher or quit , choose A for cipher , B for decipher , C to quit
C
the end

Limitations

Processes only alphabetic characters (A-Z, case-insensitive) and spaces.
Requires manual input of keys satisfying (a*c) mod 26 = 1.
Console input only, no file input/output.

License
This project is licensed under the MIT License. See the LICENSE file for details.
Author

[Mariam Hesham] - Computer Science Student at Cairo University
GitHub: [mariam0905]

Acknowledgments

Inspired by coursework in Structured Programming at Cairo University.
Thanks to Dr. Mohammad El-Ramly for guidance.

