

// Problem E


#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char str[n];
    scanf("%s", &str);
    int count = 0, arr[256] = {0};
    for (i = 0; i < n; i++)
    {
        str[i] = (toupper(str[i]));
        if (arr[str[i]] == 0)
        {
            arr[str[i]]++;
            count++;
        }
    }
    if (count == 26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     char word[n];
//     scanf("%s", word);
//     int ck[26];
//     for (int i = 0, a = 65; i < 26; i++, a++)
//     {

//         ck[i] = a;
//     }

//    if(n==26){
//         for (int i = 0; i < n; i++)
//     {

//         if (word[i] >= 'A' && word[i] <= 'Z')
//         {
//             for (int j = 'A'; j <= 'Z'; j++)
//             {
//                 if (word[i] == j)
//                 {
//                     for (int k = 'A', l = 0; k <= 'Z'; k++, l++)
//                     {
//                         if (word[i] == k)
//                         {
//                             ck[l] = 0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (word[i] >= 'a' && word[i] <= 'z')
//         {
//             for (int j = 'a'; j <= 'z'; j++)
//             {
//                 if (word[i] == j)
//                 {
//                     for (int k = 'A', l = 0; k <= 'Z'; k++, l++)
//                     {

//                         if (word[i] - 32 == k)
//                         {
//                             ck[l] = 0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//    }
//     int count=0;
//     for (int i = 0; i < 26; i++)
//     {
//         if(ck[i]==0){
//             count++;
//         }
//     }
//     if(count==26){
//         printf("YES\n");
//     }
//     else{
//         printf("NO\n");
//     }

//     return 0;
// }