#include <stdio.h>


int func(int a,int b){
    if(a == 1){
        return 0;
    }
    return (func(a-1,b)+b) % a;
}


int main(){
    int n;
    int x,y;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d%d",&x,&y);
        int resposta = func(x,y)+1;
        printf("case %d: %d\n",i+1,resposta);
    }
    return 0;
}