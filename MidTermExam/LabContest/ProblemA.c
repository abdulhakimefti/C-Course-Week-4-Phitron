// Problem A
#include<stdio.h>
#include<string.h>
int main (){
    char name[100];
    char fr[100];
    int count = 0;
    fgets(name,100,stdin);
    int len = strlen(name)-1;
    for(int i = 0;i<len;i++){
        fr[i]=-1;
    }

    for(int i = 0;i<len;i++){
         int c =-1;
        for(int j = i+1;j<len;j++){
            if(name[i]==name[j]){
                c++;
                fr[i]=c;
            }
        }

    }
    for(int i = 0;i<len;i++){
       if(fr[i]==-1){
            count++;
        }
    }
   if(count%2==1){
   printf("IGNORE HIM!\n");
   }
   else{
       printf("CHAT WITH HER!\n");
   }

    return 0;
}