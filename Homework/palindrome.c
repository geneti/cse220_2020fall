#include<stdio.h>

int isPalindrome(char *string);
int isPalindromeFlexible(char *string);
char toLower(char x);
char * convertToYesNo(int x);

int main() {
	char *str1 = "Ott   o";
	char *str2 = "tacocat";
	char *str3 = "Mirror";
	char *str4 = "123 3 2 1";
	char *str5 = "A Santa lived as a devil at NASA";
	char *str6 = "anna_bob";
	char *str7 = " C";
	char *str8 = " C ";
	
	printf("%35s | %15s | isPalindromeFlexible\n", "String", "isPalindrome");
	printf("--------------------------------------------------------------------------------\n");
	printf("%35s | %15s | %s\n", 
		str1, convertToYesNo(isPalindrome(str1)), convertToYesNo(isPalindromeFlexible(str1)));
	printf("%35s | %15s | %s\n", 
		str2, convertToYesNo(isPalindrome(str2)), convertToYesNo(isPalindromeFlexible(str2)));
	printf("%35s | %15s | %s\n", 
		str3, convertToYesNo(isPalindrome(str3)), convertToYesNo(isPalindromeFlexible(str3)));
	printf("%35s | %15s | %s\n", 
		str4, convertToYesNo(isPalindrome(str4)), convertToYesNo(isPalindromeFlexible(str4)));
	printf("%35s | %15s | %s\n", 
		str5, convertToYesNo(isPalindrome(str5)), convertToYesNo(isPalindromeFlexible(str5)));
	printf("%35s | %15s | %s\n", 
		str6, convertToYesNo(isPalindrome(str6)), convertToYesNo(isPalindromeFlexible(str6)));
	printf("%35s | %15s | %s\n", str7, 
		convertToYesNo(isPalindrome(str7)), convertToYesNo(isPalindromeFlexible(str7)));
	printf("%35s | %15s | %s\n", 
		str8, convertToYesNo(isPalindrome(str8)), convertToYesNo(isPalindromeFlexible(str8)));
}

int isPalindrome(char *string) {
	char *end = string;
	//Move end to the last char of the string, right before \0
	while (*(end+1) != '\0'){
		end++;
	}
	
	while (string < end) {
		if (*string == *end) {
			string++;
			end--;
		} else {
			//Mismatched letters, exit function
			return 0;
		}
	}
	return 1;
}

int isPalindromeFlexible(char *string) {
	char *end = string;
	//Move end to the last char of the string, right before \0
	while (*(end+1) != '\0'){
		end++;
	}
	
	while (string < end) {
		//Skip spaces
		while (*string == ' ')
			string++;
		while (*end == ' ')
			end--;

		//Compare ignoring case
		if (toLower(*string) == toLower(*end)) {
			string++;
			end--;
		} else {
			//Mismatched letters, exit function
			return 0;
		}
	}
	return 1;
}

//Tranform into lowercase, only if uppercase
char toLower(char x) {
	if (x >= 'A' && x <= 'Z')
		x = x + 'a' - 'A';
	return x;
}

char * convertToYesNo(int x) {
	if (x == 1)
		return "YES";
	else
		return "NO ";
}