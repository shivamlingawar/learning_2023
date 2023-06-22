#include <stdio.h>
#include <ctype.h>

void changeToUpperCase(FILE *input, FILE *output) {
    int c;
    while ((c = fgetc(input)) != EOF) {
        fputc(toupper(c), output);
    }
}

void changeToLowerCase(FILE *input, FILE *output) {
    int c;
    while ((c = fgetc(input)) != EOF) {
        fputc(tolower(c), output);
    }
}

void changeToSentenceCase(FILE *input, FILE *output) {
    int c;
    int isFirstCharacter = 1;
    while ((c = fgetc(input)) != EOF) {
        if (isFirstCharacter) {
            fputc(toupper(c), output);
            isFirstCharacter = 0;
        } else {
            fputc(tolower(c), output);
        }
        if (c == '.' || c == '?' || c == '!') {
            isFirstCharacter = 1;
        }
    }
}

int main() {
    FILE *input, *output;
    char inputFile[100], outputFile[100], option;

    printf("Enter the name of the input file: ");
    scanf("%s", inputFile);

    printf("Enter the name of the output file: ");
    scanf("%s", outputFile);

    printf("Enter the option for text case: ");
    scanf(" %c", &option);

    input = fopen(inputFile, "r");
    output = fopen(outputFile, "w");

    if (input == NULL || output == NULL) {
        printf("Failed to open files.\n");
        return 1;
    }

    switch (option) {
        case 'u':
            changeToUpperCase(input, output);
            printf("File copied and text converted to Upper Case.\n");
            break;
        case 'l':
            changeToLowerCase(input, output);
            printf("File copied and text converted to Lower Case.\n");
            break;
        case 's':
            changeToSentenceCase(input, output);
            printf("File copied and text converted to Sentence Case.\n");
            break;
        default:
            printf("Invalid option.\n");
            return 1;
    }

    fclose(input);
    fclose(output);

    return 0;
}