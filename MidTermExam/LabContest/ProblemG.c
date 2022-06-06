// Problem G


#include <stdio.h>
#include <string.h>
int main()
{
    int n,a;
    scanf("%d", &n);
    while (0 < n)
    {
        char str[101];

        scanf("%s", str);
        int len = strlen(str);
        int i = 0;
        while (str[i])
        {
            printf("%c", str[i]);
            i += 2;
        }
        printf("%c\n", str[len - 1]);
        n--;
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     char wordA[1000];

//     scanf("%s", wordA);
//     int lenA = strlen(wordA);
//     char wordB[1000];

//     scanf("%s", wordB);
//     int lenB = strlen(wordB);
//     char wordC[lenA];
//     char wordD[lenB];
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < lenA; i++)
//     {
//         if (i % 2 == 0)
//         {

//             wordC[j] = wordA[i];
//             j++;
//         }
//     }
//     wordC[j] = wordA[i - 1];
//     wordC[j + 1] = '\0';

//     i = 0;
//     j = 0;
//     for (i = 0; i < lenB; i++)
//     {
//         if (i % 2 == 0)
//         {

//             wordD[j] = wordB[i];
//             j++;
//         }
//     }
//     wordD[j] = wordB[i - 1];
//     wordD[j + 1] = '\0';
//     printf("%s\n", wordC);

//     printf("%s\n", wordD);

//     return 0;
// }
