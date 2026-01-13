# Explanation
For two words to be anagram the string length must be same, if not we can reject them without any
string matching. Then, i converted string into array and compared each letter of one string to another, 
if match is found, convert the letter in array to zero using found as a flag. Finally when all letter are 
matched and all array are zero then the function returns true else the found remains false and returns
false

# Time and Space Complexity
## Time Complexity
The time complexity of this code is O(n^2) because of the nested loops used to compare each character of the two strings. 

## Space Complexity
The space complexity is O(n) due to the additional array used to store a copy of one of the strings. */
