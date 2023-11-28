/*
You wrote all your unit test names in camelCase. But some of your colleagues have troubles reading these long test names. So you make a compromise to switch to underscore separation.

To make these changes fast you wrote a class to translate a camelCase name into an underscore separated name.

Implement the ToUnderscore() method.

Example:

"ThisIsAUnitTest" => "This_Is_A_Unit_Test"

But of course there are always special cases...

You also have some calculation tests. Make sure the results don't get split by underscores. So only add an underscore in front of the first number.

Also Some people already used underscore names in their tests. You don't want to change them. But if they are not split correct you should adjust them.

Some of your colleagues mark their tests with a leading and trailing underscore. Don't remove this.

And of course you should handle empty strings to avoid unnecessary errors. Just return an empty string then.

Example:

"Calculate15Plus5Equals20" => "Calculate_15_Plus_5_Equals_20"

"This_Is_Already_Split_Correct" => "This_Is_Already_Split_Correct"

"ThisIs_Not_SplitCorrect" => "This_Is_Not_Split_Correct"

"_UnderscoreMarked_Test_Name_" => _Underscore_Marked_Test_Name_"
*/

#include <iostream>

class CamelCaseTranslator
{
public: 
    static std::string toUnderScore(std::string s)
    {
        std::string temp = "";
        for (int i = 0; i < s.length(); ++i)
        {
            if ((std::isupper(s[i]) || (std::isdigit(s[i]))) && i != 0 && (s[i - 1] != '_')) {
                if (isdigit(s[i - 1]) && isdigit(s[i])) {
                    temp += toupper(s[i]);
                }
                else {
                    temp += '_';
                    temp += toupper(s[i]);
                }
            }
            else {
                temp += s[i];
            }
        }
    
        return temp;
    };
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << (CamelCaseTranslator::toUnderScore("ThisIsAUnitTest") == "This_Is_A_Unit_Test")  << ' ' << CamelCaseTranslator::toUnderScore("ThisIsAUnitTest") << "\n";
    std::cout << (CamelCaseTranslator::toUnderScore("ThisShouldBeSplittedCorrectIntoUnderscore") == "This_Should_Be_Splitted_Correct_Into_Underscore")  << ' ' << CamelCaseTranslator::toUnderScore("ThisShouldBeSplittedCorrectIntoUnderscore") << "\n";
    std::cout << (CamelCaseTranslator::toUnderScore("Calculating1Plus1Equals2") == "Calculating_1_Plus_1_Equals_2")  << ' ' << CamelCaseTranslator::toUnderScore("Calculating1Plus1Equals2") << "\n";
    std::cout << (CamelCaseTranslator::toUnderScore("Calculating5Plus5Equals10") == "Calculating_5_Plus_5_Equals_10")  << ' ' << CamelCaseTranslator::toUnderScore("Calculating5Plus5Equals10") << "\n";
    std::cout << (CamelCaseTranslator::toUnderScore("Calculate500DividedBy5Equals100") == "Calculate_500_Divided_By_5_Equals_100")  << ' ' << CamelCaseTranslator::toUnderScore("Calculate500DividedBy5Equals100") << "\n";

    return 0;
}
