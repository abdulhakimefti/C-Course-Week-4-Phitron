// Problem C
 #include<stdio.h>
 #include<string.h>
 int main (){
     int n;
     scanf("%d",&n);
     char color[n];
     scanf("%s",color);
     int c =0;
     int ck=0;

    for(int i =1;i<n;i++){

        if(color[ck]==color[i]){
            ck=i;
            c++;
        }
        else{
            ck++;
        }
    }
    printf("%d\n",c);
    return 0;
}
