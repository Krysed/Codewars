/*
Time to win the lottery!

Given a lottery ticket (ticket), represented by an array of 2-value arrays, you must find out if you've won the jackpot.

Example ticket:

{ { "ABC", 65 }, { "HGR", 74 }, { "BYHT", 74 } }
To do this, you must first count the 'mini-wins' on your ticket. Each subarray has both a string and a number within it. If the character code of any of the characters in the string matches the number, you get a mini win. Note you can only have one mini win per sub array.

Once you have counted all of your mini wins, compare that number to the other input provided (win). If your total is more than or equal to (win), return 'Winner!'. Else return 'Loser!'.

All inputs will be in the correct format. Strings on tickets are not always the same length.
*/

#include <iostream>
#include <vector>

std::string bingo(std::vector<std::pair<std::string, int>> ticket, int win)
{
    int winCounter = 0;
    for (auto p : ticket) {
        for (char c : p.first) {
            if (c == p.second) {
                ++winCounter;
                break;
            }
        }
    }

    return winCounter >= win ? "Winner!" : "Loser!";
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (bingo({ {"ABC", 65}, {"HGR", 74}, {"BYHT", 74} }, 2) == "Loser!") << "\n";
    std::cout << (bingo({ {"ABC", 65}, {"HGR", 74}, {"BYHT", 74} }, 1) == "Winner!") << "\n";
    std::cout << (bingo({ {"HGTYRE", 74}, {"BE", 66}, {"JKTY", 74} }, 3) == "Loser!") << "\n";

    return 0;
}
