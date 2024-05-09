#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct tag {
    int code;
    char name[21];
    float salary;

} Agent;

int main(void) {
    char ans;
    Agent A;
    FILE *ptr_out;

    if ((ptr_out = fopen("agent.txt", "wb")) == NULL) {
        printf("Cannot open the file\n");
        exit(1);
    }

    do {
        printf("Enter the code: ");
        scanf("%d", &A.code);

        printf("Enter the name: ");
        scanf("%s", A.name);

        printf("Enter the salary: ");
        scanf("%f", &A.salary);

        fwrite(&A, sizeof(A), 1, ptr_out);

        printf("Another agent ? [y/n]: ");
        fflush(stdout);
        getchar();

        ans = getchar();

    } while (ans == 'y' || ans == 'Y');

    fclose(ptr_out);
    return 0;
}
