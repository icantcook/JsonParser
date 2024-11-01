#ifndef _STDTYPE
#define _STDTYPE

#include <string.h>  // For strcmp

// Define an "enum" style set of constants for specific values
typedef enum {
    VALUE_FALSE,
    VALUE_TRUE,
    VALUE_NULL,
    Object,
    Array
} ValueTypeEnum;

typedef enum {
    VALUE_FALSE_INITIAL,
    VALUE_TRUE_INITIAL,
    VALUE_SPACE,
    VALUE_NULL_INITIAL,
    VALUE_QUOTE,
    VALUE_COLON,
    VALUE_COMMA,
    VALUE_SEMICOLON,
    VALUE_OPEN_BRACKET,
    VALUE_CLOSE_BRACKET,
    VALUE_OPEN_BRACE,
    VALUE_CLOSE_BRACE,
    VALUE_UNKNOWN
} CharTypeEnum;

// Function to map strings to the enum type
CharTypeEnum getCharType(char str) {
    if (str =='f') {
        return VALUE_FALSE_INITIAL;
    } else if (str =='t') {
        return VALUE_TRUE_INITIAL;
    } else if (str =='n') {
        return VALUE_NULL_INITIAL;
    } else if (str ==':'){
        return VALUE_COLON;
    } else if (str ==',') {
        return VALUE_COMMA;
    } else if (str ==';') {
    return VALUE_SEMICOLON;
    }else if (str =='"') {
    return VALUE_QUOTE;
    } else if (str =='['){
        return VALUE_OPEN_BRACKET;
    } else if (str ==' ' || str =='\t'){
        return VALUE_SPACE;
    } else if (str ==']'){
        return VALUE_CLOSE_BRACKET;
    } else if (str =='{'){
        return VALUE_OPEN_BRACE;
    } else if (str =='}'){ 
        return VALUE_CLOSE_BRACE;
    }
    return VALUE_UNKNOWN;
}

#endif /* _STDTYPE */