// Problem D
 #include<stdio.h>
 #include<string.h>

int main (){
    char word[1000];
    gets(word);
    int a;
    a=word[0];
    if(a>=97){
        word[0]-=32;
    }
    puts(word);
    return 0;
}