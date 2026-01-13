#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>

bool anagram(char *s,char *t)
{
    int i,j;
    int len1=strlen(s);
    int len2=strlen(t);
    if(len1 != len2)
        return false;
    char arr[100];
    strcpy(arr,s);
    for(i=0 ; i< len2 ; i++) {
        bool found=false;
        for (j=0 ; j<len1 ; j++){
            if(arr[j]==t[i]){
                arr[j]=0;
                found=true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

int main()
{
    char s[]="listgn";
    char t[]="silent";
    bool output=anagram(s,t);
    if(output==true)
        printf("They are anagrams");
    else printf("They are not anagrams");
    
    return 0;
}

//Explanation
/* For two words to be anagram the string length must be same, if not we can reject them without any
string matching. Then, i converted string into array and compared each letter of one string to another, 
if match is found, convert the letter in array to zero using found as a flag. Finally when all letter are 
matched and all array are zero then the function returns true else the found remains false and returns
false*/

//Time and Space Complexity

/* The time complexity of this code is O(n^2) because of the nested loops 
used to compare each character of the two strings. 

The space complexity is O(n) due to the additional array used to store a
 copy of one of the strings. */