#include<stdio.h>

int is_reverse(char *a, char *b)
{
	// variables
	int aLen = 0, bLen = 0,i = 0,j = 0,rev = 0;
	//loops to calculate length of strings
	while(a[i++]!='\0')
		aLen++;
	while(b[j++]!='\0')
		bLen++;
	//if both lengths are not equal
	//it returns 0	
	if(aLen != bLen)
		return 0;
	
	//loop to check both words are reverse to each other or not	
	for(i = 0,j = bLen-1; i < aLen,j >= 0; i++,j--)
	{
		if(a[i]==b[j])
			rev++;
		else
			break;
	}
	//if reverse it returns 1
	if(rev == aLen)
		return 1;
	return 0;	
}
//main code
int main()
{
	char word1[99];
	char word2[99];
	int result = 0;
	scanf("%s", word1);
	scanf("%s", word2);
	//function calling
	result = is_reverse(word1, word2);
	//displaying result
	if (result == 1)
	{
		printf("%s is the reverse of %s", word1, word2);
	}
	else if (result == 0)
	{
		printf("%s is not the reverse of %s", word1, word2);
	}
	return 0;
}
