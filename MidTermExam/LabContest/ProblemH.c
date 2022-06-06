
// Problem H
 #include<stdio.h>
 int main (){
char s[] = "banana";
printf("%d",sizeof(s));
    return 0;
}
int main() {

    int m;
    int s;
    scanf("%d %d", &m, &s);
    int A[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ", A[(i + s) % m]);
    }
    puts("");

    return 0;
}