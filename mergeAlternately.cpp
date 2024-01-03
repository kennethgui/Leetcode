/*
1768. Merge Strings Alternately
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d

*/
#include <iostream>
#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int i, j = 0; //i and j are counters
        std::string merge = ""; //new string, merge, returns the combintation of both word1 and word2

        /*
            this while loop handles the edge case where both strings are even size.
            adds letter of word1 first and alternates until end.
        */
        while(i < word1.size() && j < word2.size()) {
            merge += word1[i++];
            merge += word2[j++];
        }

        /*
            this while loop handles the case that word1 is longer, after intial while loop, this loop
            will continue to add the remaining letters.
        */
        while(i < word1.size()) {
            merge += word1[i++];
        }

        /*
            this while loop handles the case that word2 is longer, after intial while loop, this loop
            will continue to add the remaining letters.
        */
        while(j < word2.length()) {
            merge += word2[j++];
        }
        return merge;
    }
};

int main() {}