#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_RULES 100
#define MAX_SYMBOLS 50

char productions[MAX_RULES][MAX_SYMBOLS];
char firstSets[MAX_SYMBOLS][MAX_SYMBOLS];
int productionCount = 0;

// Function to check if a symbol is a terminal
int isTerminal(char symbol) {
    return !isupper(symbol);
}

// Function to add a symbol to the FIRST set
void addToFirstSet(char *firstSet, char symbol) {
    if (!strchr(firstSet, symbol)) {
        int len = strlen(firstSet);
        firstSet[len] = symbol;
        firstSet[len + 1] = '\0';
    }
}

// Function to compute the FIRST set for a given non-terminal
void computeFirst(char nonTerminal) {
    for (int i = 0; i < productionCount; i++) {
        if (productions[i][0] == nonTerminal) {
            // Iterate through the production rules
            for (int j = 3; productions[i][j] != '\0'; j++) {
                char symbol = productions[i][j];

                if (symbol == '|') {
                    continue;
                } else if (isTerminal(symbol)) {
                    addToFirstSet(firstSets[nonTerminal - 'A'], symbol);
                    break;
                } else {
                    // Recursive call for non-terminal
                    computeFirst(symbol);
                    char *firstSet = firstSets[symbol - 'A'];
                    for (int k = 0; firstSet[k] != '\0'; k++) {
                        addToFirstSet(firstSets[nonTerminal - 'A'], firstSet[k]);
                    }

                    // Stop if the non-terminal doesn't produce epsilon
                    if (!strchr(firstSets[symbol - 'A'], '#')) {
                        break;
                    }
                }
            }
        }
    }
}

int main() {
    printf("Enter the number of productions: ");
    scanf("%d", &productionCount);
    getchar(); // Consume the newline character

    printf("Enter the productions (e.g., A->aB|c):\n");
    for (int i = 0; i < productionCount; i++) {
        fgets(productions[i], MAX_SYMBOLS, stdin);
        productions[i][strcspn(productions[i], "\n")] = '\0';
    }

    // Initialize FIRST sets
    for (int i = 0; i < MAX_SYMBOLS; i++) {
        firstSets[i][0] = '\0';
    }

    // Compute FIRST sets for all non-terminals
    for (int i = 0; i < productionCount; i++) {
        char nonTerminal = productions[i][0];
        computeFirst(nonTerminal);
    }

    // Print the FIRST sets
    printf("\nFIRST sets:\n");
    for (int i = 0; i < MAX_SYMBOLS; i++) {
        if (firstSets[i][0] != '\0') {
            printf("FIRST(%c) = { %s }\n", i + 'A', firstSets[i]);
        }
    }

    return 0;
}
