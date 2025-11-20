#include <stdio.h>
#include <string.h>

int main(){
	int rollNumber;
	char Name[20];
//	pointer
	FILE *fp;
	
//	file create (file open)

//	printf("File created succeessfully\n");
	
//	fputc('a',fp); for character

//================================================================
//							WRITING
//================================================================

//	fp = fopen("demo.txt","w"); Creates new file if does not exists

//	For writing the user input with an argument
//	printf("Enter your Roll number: ");
//	scanf("%d", &rollNumber);
//	fprintf(fp,"ID : %d", rollNumber);
//	printf("Enter your name: ");
//	scanf("%s", Name);
//	fprintf(fp,"\nName : %s", Name);

//================================================================
//							READING
//================================================================	
	
	fp= fopen("demo.txt", "r"); // if file does not exist then no data will be received

//	Checking if file exists
	if (fp == NULL){
		printf("Error in a file / ERROR 404");
		return 0;
	}
	
//	Reading chracters from the file
//	char c;
//	while ((c = fgetc(fp)) != EOF){
//		printf("%c\n", c);
//	}
	
//	Reading words from the file
//	char c[20];
//	while (fgets(c, sizeof(c), fp) != NULL) {
//    printf("%s", c);
//	}

//	Reading Vowels from the file
	int c;
	int vowelCount = 0;
	int total = 0;
	while ((c = fgetc(fp)) != EOF){
		if ((c>='A' && c<='Z') || ((c>='a' && c<='z'))){
			switch(c){
			case 'a': case'e': case 'i': case'o': case 'u': case 'A': case'E': case 'I': case'O': 
			case 'U': 
				vowelCount++;
				break;
			}
			total++;
		}	
	}	
	printf("Vowels: %d\nConsonants: %d", vowelCount, total-vowelCount);
	
	
//	For closing the file
	fclose(fp);
	
	
	
	return 0;
}
