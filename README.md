# Affine Cipher Implementation

This C++ program implements the Affine Cipher, a type of monoalphabetic substitution cipher where each letter in the alphabet is mapped to its numeric equivalent, encrypted using a simple mathematical function, and converted back to a letter.

## Features

- Encryption (cipher) of plaintext messages
- Decryption (decipher) of encrypted messages
- Input validation for cipher keys
- Support for uppercase and lowercase letters
- Preserves spaces in messages
- Ignores non-alphabetic characters

## How to Use

1. Compile the program using a C++ compiler:

   ```bash
   g++ affine.c++ -o affine
   ```

2. Run the executable:

   ```bash
   ./affine
   ```

3. Follow the menu options:

   - `A`: Cipher (encrypt) a message
   - `B`: Decipher (decrypt) a message
   - `C`: Quit the program

4. When encrypting or decrypting, you'll need to provide three keys:
   - `a`: First encryption key (must be coprime with 26)
   - `b`: Second encryption key (shift value)
   - `c`: Decryption key (modular multiplicative inverse of 'a' modulo 26)

## Mathematical Background

The Affine Cipher uses the following formulas:

- Encryption: E(x) = (ax + b) mod 26
- Decryption: D(y) = c(y - b) mod 26

Where:

- x is the position of the plaintext letter (A=0, B=1, ..., Z=25)
- y is the position of the ciphertext letter
- a and m (26) must be coprime
- c is the modular multiplicative inverse of a modulo m

## Input Requirements

1. Keys (a, b, c) must be positive integers
2. The keys 'a' and 'c' must satisfy the condition: (a\*c) mod 26 = 1
3. Messages can contain:
   - Uppercase letters (A-Z)
   - Lowercase letters (a-z)
   - Spaces
   - Other characters (will be ignored)

## Example Usage

```
Welcome to the affine cipher, what do you want to do?
Choose A for cipher, B for decipher, C to quit

> A
Enter the three keys (a, b, c):
> 5 8 21

Enter the message you want to cipher:
> HELLO WORLD

The encrypted message is: RCBBW JWZBS
```

## Notes

- The program automatically converts all letters to uppercase during processing
- Spaces are preserved in the output
- Non-alphabetic characters are ignored
- Invalid keys will prompt for re-entry
