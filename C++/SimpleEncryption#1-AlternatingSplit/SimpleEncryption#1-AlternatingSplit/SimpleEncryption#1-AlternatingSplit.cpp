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
#include <algorithm>
#include <iostream>

std::string encrypt(std::string text, int n)
{
    if (text.empty() || n < 1) return text;
    for (int i = 0; i < n; ++i) {
        std::string oddChars{}, evenChars{};

        for (int j = 0; j < text.size(); ++j) {
            if (j % 2 == 0) 
                evenChars += text[j];
            else 
                oddChars += text[j];
        }
        text = oddChars + evenChars;
    }
    return text;
}

std::string decrypt(std::string encryptedText, int n)
{
    if (encryptedText.empty() || n < 1) return encryptedText;

    for (int i = 0; i < n; ++i) {
        int halfSize = encryptedText.size() / 2;
        std::string oddChars = encryptedText.substr(0, halfSize);
        std::string evenChars = encryptedText.substr(halfSize);

        encryptedText.clear();

        for (size_t j = 0; j < evenChars.size(); j++) {
            encryptedText += evenChars[j];
            if (j < oddChars.size()) {
                encryptedText += oddChars[j];
            }
        }

        if (oddChars.size() > evenChars.size()) {
            encryptedText += oddChars.back();
        }
    }
    return encryptedText;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (encrypt("This is a test!", 0) == "This is a test!") << "\n";
    std::cout << (encrypt("This is a test!", 1) == "hsi  etTi sats!") << "\n";
    std::cout << (encrypt("This is a test!", 2) == "s eT ashi tist!") << "\n";
    std::cout << (encrypt("This is a test!", 3) == " Tah itse sits!") << "\n";
    std::cout << (encrypt("This is a test!", 4) == "This is a test!") << "\n";
    std::cout << (encrypt("This is a test!", -1) == "This is a test!") << "\n";
    std::cout << (encrypt("This kata is very interesting!", 1) == "hskt svr neetn!Ti aai eyitrsig") << "\n";

    std::cout << (decrypt("This is a test!", 0) == "This is a test!") << "\n";
    std::cout << (decrypt("hsi  etTi sats!", 1) == "This is a test!") << "\n";
    std::cout << (decrypt("s eT ashi tist!", 2) == "This is a test!") << "\n";
    std::cout << (decrypt(" Tah itse sits!", 3) == "This is a test!") << "\n";
    std::cout << (decrypt("This is a test!", 4) == "This is a test!") << "\n";
    std::cout << (decrypt("This is a test!", -1) == "This is a test!") << "\n";
    std::cout << (decrypt("hskt svr neetn!Ti aai eyitrsig", 1) == "This kata is very interesting!") << "\n";
    
    
    std::cout << (encrypt("", 0) == "") << "\n";
    std::cout << (encrypt("", 3) == "") << "\n";
    std::cout << (decrypt("", 0) == "") << "\n";
    std::cout << (decrypt("", 3) == "") << "\n";


    return 0;
}
