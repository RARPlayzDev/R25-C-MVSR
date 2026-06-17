#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strcpy(char* source) {
    if (source == NULL) {
        printf("Error: Source string is NULL\n");
        return NULL;
    }
    
    int length = strlen(source);
    char* destination = (char*)malloc((length + 1) * sizeof(char));
    
    if (destination == NULL) {
        printf("Error: Memory allocation failed\n");
        return NULL;
    }
    
    int i;
    for (i = 0; i < length; i++) {
        destination[i] = source[i];
    }
    
    destination[i] = '\0';
    
    return destination;
}

int main() {
    char str1[] = "Hello World";
    char str2[] = "C Programming";
    char str3[] = "Memory Allocation";
    
    printf("Original strings:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n\n", str3);
    
    char* copy1 = my_strcpy(str1);
    char* copy2 = my_strcpy(str2);
    char* copy3 = my_strcpy(str3);
    
    if (copy1 != NULL && copy2 != NULL && copy3 != NULL) {
        printf("Copied strings:\n");
        printf("copy1: %s\n", copy1);
        printf("copy2: %s\n", copy2);
        printf("copy3: %s\n\n", copy3);
    
        free(copy1);
        free(copy2);
        free(copy3);
        
    }
    
    return 0;
}
