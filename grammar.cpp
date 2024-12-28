#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_valid(char *input) {
    int count_a = 0;
    int count_b = 0;
    int i = 0;

    while (input[i] != '\0') {
        if (input[i] == 'a') {
            count_a++;
        } else if (input[i] == 'b') {
            count_b++;
            if (count_b > count_a) {
                return false;
            }
        } else {
            return false; // Invalid character
        }
        i++;
    }

    return count_a == count_b;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if present
    input[strcspn(input, "\n")] = '\0';

    if (is_valid(input)) {
        printf("The input string satisfies the grammar.\n");
    } else {
        printf("The input string does not satisfy the grammar.\n");
    }

    return 0;
}

