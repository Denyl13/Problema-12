#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

    int pick() {
        int arr[8] = {2,3,5,7,11,13,17,23};
        int random;
        srand(time(NULL));
        random = arr[rand() % 8];
        _sleep(1000);
        return random;
    }

int unprim() {
    srand(time(NULL));
    int x;
    int arr[2] = {1,4};
    _sleep(1000);
    x = arr[rand() % 2];

    return x;

}

int main() {
    FILE * g;
    g = fopen("In.txt", "w");
    char sir[100], copie[1000];
    int vec[100];
    printf("Da sirul : ");
    scanf("%s", & sir);
    int i, j, h, x, m, p;
    int n = strlen(sir);
    int s = 0;

    for (i = 0; i < n; i++) {
        vec[i] = pick();

        printf("  %d   ", vec[i]);
        s = s + vec[i];
    }
    printf("\nWait... \n");
    int k;
    p = rand() % 3;
    p++;
    for (k = 0; k < s;)

        for (i = 0; i < n; i++) {
        for (h = 0; h < p; h++) {
            x = unprim();
            if (rand() % 2) m = rand() % 25 + 65;
            else m = rand() % 25 + 97;
            s = s + x;
            for (j = 0; j < x; j++) {
                copie[k] = (char) m;
                k++;
            }
        }
        for (j = 0; j < vec[i]; j++) {
            copie[k] = sir[i];
            k++;
        }
    }

;
    printf("\nSirul criptat : \n");
    for (i = 0; i < s; i++) {
        printf("%c", copie[i]);
    }
    printf("\n");
    //fprintf(g,"%d\n", s);

    for (i = 0; i < s; i++) {
        fprintf(g, "%c", copie[i]);
    }
}
