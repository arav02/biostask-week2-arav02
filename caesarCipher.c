
#include <stdio.h>
#include <string.h>


void caesarcipher(char* plaintext,int key);

int main()
{
	char plaintext[101];
	int key=3;
	
	printf("enter the plain text:");
	fgets(plaintext,sizeof(plaintext),stdin);
	
	printf("the cipher text is: "); 
	caesarcipher(plaintext,key);
	
	return 0;
}

void caesarcipher(char* plaintext,int key)
{
	
	int i=0;
	int ciphervalue;
	char cipher;
	
	while(plaintext[i] !='\0' && strlen(plaintext)-1 > i)
	{
		ciphervalue=((int)plaintext[i]-97 + key)%26 +97;
		cipher=(char)(ciphervalue);
		
		printf("%c",cipher);
		i++;
	}
	printf("\n");
}
