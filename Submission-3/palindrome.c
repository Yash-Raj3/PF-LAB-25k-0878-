char* firstPalindrome(char** words, int wordsSize) {
    for (int i=0; i<wordsSize; i++) {
        if (strlen(words[i]) == 1){
            return words[i];
        }
        int j=0, k=strlen(words[i])-1;
        bool palindrome;
        while (k > j) {
            if (words[i][j] == words[i][k]){
                palindrome = true;
            } else{
                palindrome = false;
                break;
            }
            j++;
            k--;
        }
        if (palindrome){
            return words[i];
        }
    }
    return "";
}