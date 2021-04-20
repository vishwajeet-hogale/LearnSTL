#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LIMIT 40
int get_diff(char *a,char *b){
    int i=0;
    int c=0;

    int len = strlen(a);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(a[i] == b[j]){
                c++;
                break;
            }
   
        }
    }
    if(c==len){
        return -2;
    }
    
    return len -c ;
    
}
int *get_min_diff(int a_count,char **a,int b_count,char  **b){
    int len = a_count;
    int *res = (int*)calloc(len,sizeof(int));
    int c =0;
    for(int i=0;i<len;i++){
        if(strlen(a[i])!=strlen(b[i])){
            res[i] = -1;
        }
        else{
            if(get_diff(a[i],b[i]) == -2){
                res[i] = 0;
            }
            else{
                res[i] = get_diff(a[i],b[i]);
            }
        }

    }
    return res;
    
}
int main(){
    char **a = (char**)malloc(3*sizeof(char*));
    char **b = (char**)malloc(3*sizeof(char*));
    for(int k=0;k<3;k++){
        a[k] = (char*)malloc(MAX_LIMIT*sizeof(char));
        b[k] = (char*)malloc(MAX_LIMIT*sizeof(char));
    }
    for(int i=0;i<3;i++){
        printf("A : Enter the word number  %d",i);
        fgets(a[i],MAX_LIMIT, stdin);
    }
    for(int i=0;i<3;i++){
        printf("B : Enter the word number  %d",i);
        fgets(b[i],MAX_LIMIT, stdin);
    }

    int *res = get_min_diff(3,&a[0],3,&b[0]);
    for(int i=0;i<3;i++){
        printf("%d\n",res[i]);
    }
    return 0;
}