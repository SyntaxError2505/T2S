#include <stdlib.h>
#include <stdio.h>

#define MAX_LINE_LENGTH 255

int main(int argc, char *argv[]) {
	if(argc != 3){
		printf("2 arguments expected, received: %i. \nUsage: t2s [INDENT_LENGTH] [FILE]\n", argc - 1);
		return 1;
	}

	int indent_length = atoi(argv[1]);
	FILE *input_file = fopen(argv[2], "r");

	if(indent_length <= 0){
		printf("Indent length must be greater than 0\n");
		printf("If it is, please check if the indent length is an integer\n");
		return 1;
	}
	if(input_file == NULL){
		printf("Could not open file, check if it exists\n");
		return 1;
	}

	char line[MAX_LINE_LENGTH];

	while(fgets(line, MAX_LINE_LENGTH, input_file) != NULL){
		printf("%s", line);
		
		for(int i = 0; line[i] != '\n'; i++){
			if(line[i] == 0x09){
				printf("TAB\n");
			}
		}
	}

	fclose(input_file);
	return 0;
}
