/*
altERnaTIng cAsE <=> ALTerNAtiNG CaSe
Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. For example:

"hello world".ToAlternatingCase() == "HELLO WORLD"
"HELLO WORLD".ToAlternatingCase() == "hello world"
"hello WORLD".ToAlternatingCase() == "HELLO world"
"HeLLo WoRLD".ToAlternatingCase() == "hEllO wOrld"
"12345".ToAlternatingCase() == "12345" // Non-alphabetical characters are unaffected
"1a2b3c4d5e".ToAlternatingCase() == "1A2B3C4D5E"
"String.ToAlternatingCase".ToAlternatingCase() == "sTRING.tOaLTERNATINGcASE"
 */
using System;

namespace Extensions
{
    public static class StringExt
    {
        public static string ToAlternatingCase(this string s)
        {
            string tmp = "";
            for (int i = 0; i < s.Length; i++)
            {
                if (Char.IsUpper(s[i]))
                {
                    tmp += Char.ToLower(s[i]);
                }
                else if (Char.IsLower(s[i]))
                {
                    tmp += Char.ToUpper(s[i]);
                }
                else tmp += s[i];
            }
            return tmp;
        }
        public static void Main()
        {
            Console.WriteLine(ToAlternatingCase("HELLO WORLD") == "hello world");
            Console.WriteLine(ToAlternatingCase("HELLO WORLD") == "hello world");
            Console.WriteLine(ToAlternatingCase("hello WORLD") == "HELLO world");
            Console.WriteLine(ToAlternatingCase("String.prototype.toAlternatingCase") == "sTRING.PROTOTYPE.TOaLTERNATINGcASE");
            Console.WriteLine(ToAlternatingCase("altERnaTIng cAsE <=> ALTerNAtiNG CaSe") == "ALTerNAtiNG CaSe <=> altERnaTIng cAsE");
        }
    }
}