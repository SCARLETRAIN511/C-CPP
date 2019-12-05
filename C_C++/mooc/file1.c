#include <stdio.h>
int main(int argc, char const *argv[]){
    FILE* fp=fopen("file.in","r");
    if (fp)
    {
        int num;
        fscanf(fp,"%d",&num);
        printf("%d\n",num);
        fclose(fp);
    }
    else
    {
        printf("无法打开程序");
    }
    return 0;
    
}