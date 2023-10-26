#define SIZE 255
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Datatype from user input can be integer, float, character or string.

bool isInteger(char *input)
{
    char *endptr;
    strtol(input, &endptr, 10);
    return (*endptr == '\0');
}

bool isFloat(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == ',')
            input[i] = '.'; // Replace comma with dot
    }
    char *endptr;
    strtof(input, &endptr);
    return (*endptr == '\0');
}

bool isCharacter(char *input)
{
    return (strlen(input) == 1);
}

char *dataInputFromUser(char *input)
{
    char *result;
    result = (char *)malloc(SIZE * sizeof(char));

    if (isInteger(input))
        result = "Integer";

    else if (isFloat(input))
        result = "Float";

    else if (isCharacter(input))
        result = "Character";

    else
        result = "String";

    return result;
}

int main()
{
    char *input;
    input = (char *)malloc(SIZE * sizeof(char));

    printf("Enter something: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove the newline character from input
    printf("You entered a %s datatype", dataInputFromUser(input));

    free(input);

    return 0;
}