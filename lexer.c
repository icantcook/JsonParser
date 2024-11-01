#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "valueType.h"

struct Lexer {
    char c;
};

  
int quoteCount = 0;
// char ProcessJSONCharacters(char c) {

//      const char* pTemp = c;
//     return c;
// }

char* RemoveWhiteSpace(const char* pInputString){
    int N = strlen(pInputString);
    char* pResult = (char*)malloc(N + 1);  // Allocate memory
    char* pString = pResult;  // Store the start of allocated memory

    bool ignoreSyntax = false;
    
    while (*pInputString != '\0') {
        CharTypeEnum type =  getCharType(*pInputString);

        if(type ==VALUE_QUOTE){
            ignoreSyntax = !ignoreSyntax;
        }
        if(!ignoreSyntax && type == VALUE_SPACE){
            pInputString++;
        }
        else{
            *pString++ = *pInputString++;                
        }
    }

    *pString = '\0';  // Null-terminate the processed string
    return pResult;
}

// Function to analyze and remove whitespace from the input string
char* AnalyseString(const char* pInputString) {
    int N = strlen(pInputString);
    char* pResult = (char*)malloc(N + 1);  // Allocate memory
    char* pString = pResult;  // Store the start of allocated memory
    
    while (*pInputString != '\0') {
        CharTypeEnum type =  getCharType(*pInputString);
        
    }
    *pString = '\0';  // Null-terminate the processed string
    return pResult;
}



char ExpectNext(char c){

}


char Parse(char c) {
    switch (getCharType(c)) {
        case VALUE_OPEN_BRACE: return VALUE_QUOTE ; break;
        case VALUE_CLOSE_BRACE: break;
        case VALUE_OPEN_BRACKET: break;
        case VALUE_CLOSE_BRACKET: break;
        case VALUE_QUOTE: break;
        case VALUE_COMMA: break;
        default: break;
    }
    return c;
}

int main() {
    char something[100];

    fgets(something, 100, stdin);

    char* pResult = RemoveWhiteSpace(something);


    //pResult = AnalyseString(pResult);
    if (pResult != NULL) {
        printf("Processed String: %s\n", pResult);
        
        char c;

        scanf("%c", &c);



       printf("Processed String: %c\n", c);


        // Free allocated memory
        free(pResult);
    }
    return 0;
}
