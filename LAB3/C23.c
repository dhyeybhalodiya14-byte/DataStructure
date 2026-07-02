#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;

    printf("Enter the number of names (N): ");
    scanf("%d", &n);
    
   
    getchar(); 

   
    char names[n][50];
    char temp[50];

   
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
       
        fgets(names[i], sizeof(names[i]), stdin);
        
       
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
           
            if (strcmp(names[j], names[j + 1]) > 0) {
                
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    
    printf("Names in Alphabetical Order :- \n");
    for (i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}