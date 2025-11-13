#include<stdio.h>
#include<string.h>

int main(){
	char word[4][10] = {"Apple", "Grapes", "Peach", "Kiwi"};
	char str2[10];
	int i=0,j=0;

	printf("Enter Your Fav Fruit: ");
	scanf("%s", &str2);
	strcpy(word[1],str2);
	for(i =0; i<4; i++)
	{
		printf("%s (%d)\n", word[i], strlen(word[i]));
		
		for(j=0; j<strlen(word[i]);j++)
		{
			printf("%c", word[i][j]);
			printf("\n");
		}
		
	}
	return 0;
}
