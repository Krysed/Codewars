/*
Implement a pseudo-encryption algorithm which given a string S and an integer N concatenates all the odd-indexed characters of S with all the even-indexed characters of S, this process should be repeated N times.

Examples:

encrypt("012345", 1)  =>  "135024"
encrypt("012345", 2)  =>  "135024"  ->  "304152"
encrypt("012345", 3)  =>  "135024"  ->  "304152"  ->  "012345"

encrypt("01234", 1)  =>  "13024"
encrypt("01234", 2)  =>  "13024"  ->  "32104"
encrypt("01234", 3)  =>  "13024"  ->  "32104"  ->  "20314"
Together with the encryption function, you should also implement a decryption function which reverses the process.

If the string S is an empty value or the integer N is not positive, return the first argument without changes.

This kata is part of the Simple Encryption Series:

Simple Encryption #1 - Alternating Split
Simple Encryption #2 - Index-Difference
Simple Encryption #3 - Turn The Bits Around
Simple Encryption #4 - Qwerty
Have fun coding it and please don't forget to vote and rank this kata! :-)
*/
#include <iostream>
std::string encrypt(std::string text, int n)
{
    if (n == 0 || text.empty())return text;
    for (int i = 0; i < n; ++i) {
        std::string oddChars, evenChars;
        for (int j = 0; j < text.length(); ++j) {
            if (j % 2 == 0) {
                evenChars += text[j];
            }
            else {
                oddChars += text[j];
            }
        }
        text = oddChars + evenChars;
    }

    return text;
}

std::string decrypt(std::string encryptedText, int n)
{
    if (n == 0 || encryptedText.empty())return encryptedText;

    int len = encryptedText.length();
    int halfLen = len / 2;

    for (int i = 0; i < n; ++i) {
        std::string text(len, ' ');

        for (int j = 0; j < halfLen; ++j) {
            text[2 * j] = encryptedText[j + halfLen];
            text[2 * j + 1] = encryptedText[j];
        }
        if (len % 2 == 1) {
            text[len - 1] = encryptedText[len - 1];
        }
        encryptedText = text;
    }
    return encryptedText;
}

bool equal(std::string a, std::string b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    //encryption
    std::cout << equal(encrypt("This is a test!", 0), "This is a test!") << "\n";
    std::cout << equal(encrypt("This is a test!", 1), "hsi  etTi sats!") << "\n";
    std::cout << equal(encrypt("This is a test!", 2), "s eT ashi tist!") << "\n";
    std::cout << equal(encrypt("This is a test!", 3), " Tah itse sits!") << "\n";
    std::cout << equal(encrypt("This is a test!", 4), "This is a test!") << "\n";
    std::cout << equal(encrypt("This is a test!", -1), "This is a test!") << "\n";
    std::cout << equal(encrypt("This kata is very interesting!", 1), "hskt svr neetn!Ti aai eyitrsig") << "\n";

    //empty text strings test
    std::cout << equal(encrypt("", 0), "") << "\n";
    std::cout << equal(encrypt("", 3), "") << "\n";

    //decryption
    std::cout << equal(decrypt("This is a test!", 0), "This is a test!") << "\n";
    std::cout << equal(decrypt("hsi  etTi sats!", 1), "This is a test!") << "\n";
    std::cout << equal(decrypt("s eT ashi tist!", 2), "This is a test!") << "\n";
    std::cout << equal(decrypt(" Tah itse sits!", 3), "This is a test!") << "\n";
    std::cout << equal(decrypt("This is a test!", 4), "This is a test!") << "\n";
    std::cout << equal(decrypt("This is a test!", -1), "This is a test!") << "\n";
    std::cout << equal(decrypt("hskt svr neetn!Ti aai eyitrsig", 1), "This kata is very interesting!") << "\n";

    //empty decryption text test
    std::cout << equal(decrypt("", 0), "") << "\n";
    std::cout << equal(decrypt("", 3), "") << "\n";

    return 0;
}
