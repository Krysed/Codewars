/*
 Write a function that removes the spaces from the string, then return the resultant string.

Examples:

Input -> Output
"8 j 8   mBliB8g  imjB8B8  jl  B" -> "8j8mBliB8gimjB8B8jlB"
"8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd" -> "88Bifk8hB8BB8BBBB888chl8BhBfd"
"8aaaaa dddd r     " -> "8aaaaaddddr"
 */

using System.Reflection.Metadata.Ecma335;

namespace Solution
{
    public static class SpacesRemover
    {
        static string NoSpace(string input)
        {
            return input != null ? input.Replace(" ", "") : null;
        }
        static void Main(string[] args)
        {
            Console.WriteLine(NoSpace("8 j 8   mBliB8g  imjB8B8  jl  B") == "8j8mBliB8gimjB8B8jlB");
            Console.WriteLine(NoSpace("8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd") == "88Bifk8hB8BB8BBBB888chl8BhBfd");
            Console.WriteLine(NoSpace("8aaaaa dddd r     ") == "8aaaaaddddr");
        }
    }
}