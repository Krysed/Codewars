//#include <boost / multiprecision / cpp_int.hpp>???
#include <string>
#include <iostream>
#include <string>
#include <vector>

std::string add(const std::string& a, const std::string& b) {
    
    if ((a == "" && b == "")) return "";
    
    if (a.length() > 20 || b.length() > 20) 
    {
        std::vector<int>numbers1{};
        std::vector<int>numbers2{};

        for (int i = 0; i < a.length(); ++i)
        {
            numbers1.push_back(int(a[i]) - 48);
        }
        for (int i = 0; i < b.length(); ++i)
        {
            numbers2.push_back(int(b[i]) - 48);
        }

        int it = 1;
        std::string num = "";
        if(numbers1.size() > numbers2.size())
        {
            for (int i = numbers1.size()-1; i >= 0; --i)
            {
                if (numbers1[i] > 10) { numbers1[i - 1]++; numbers1[i] -= 10; }
                if (numbers2.size() >= it) {
                    numbers1[i] += numbers2[numbers2.size() - it++];
                    if (numbers1[i] >= 10) {
                        numbers1[i] -= 10;
                        numbers1[i - 1]++;
                    }
                }
                std::cout << "num1: " << numbers1[i] << " ";
                num.insert(0, std::to_string(numbers1[i]));
            }
            return num;
        }
        else
        {
            //std::cout << "numbers2.size(): " << numbers2.size() << '\n';

            for (int i = numbers2.size()-1; i >= 0; --i)
            {
                if (numbers2[i] > 10) { numbers2[i - 1]++; numbers2[i] -= 10; }
                if (numbers1.size() >= it) {
                    numbers2[i] += numbers1[numbers1.size() - it++];
                    if (numbers2[i] >= 10) {
                        numbers2[i] -= 10;
                        numbers2[i - 1]++;
                    }
                }
                std::cout << "num2: " << numbers2[i] << " ";
                num.insert(0,std::to_string(numbers2[i]));
            }
            return num;
        }
    }

    unsigned long long firstNum, secondNum;
    try {
        if (a != "") firstNum = std::stoull(a);
        else firstNum = 0;

        if (b != "") secondNum = std::stoull(b);
        else secondNum = 0;
    }
    catch (const std::exception& ex) {
        // handle the exception
        std::cerr << "Error: " << ex.what() << std::endl;
        return "";
    }

    unsigned long long result = firstNum + secondNum;
    std::string str = std::to_string(result);

    return str;
}
int main()
{
    std::cout << add("123", "456") << '\n';
    std::cout << add("0", "0") << '\n';
    std::cout << add("99", "2") << '\n';
    std::cout << add("10", "35679") << '\n';
    std::cout << add("", "5") << '\n';
    std::cout << add("192", "") << '\n';
    std::cout << add("9999", "1111") << '\n';

    std::cout << add("867713543872100113803239197637230354254179086506322852", "18446744073709551615") << '\n';
    std::cout << add("18446744073709551615", "867713543872100113803239197637230354254179086506322852") << '\n';

    return 0;
}
