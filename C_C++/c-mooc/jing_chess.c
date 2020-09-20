#include <stdio.h>
int main(){
    const int size=3;
    int board[size][size];
    int i,j;
    int numOFX;
    int numOFO;
    int results=-1;
    for (i = 0; i < size; i++)
    {
        for ( j = 0; j < size; j++)
        {
            scanf("%d",&board[i][j]);
        }
    }//read the matrix using for loops;

    //check the rows;
    for (i = 0; i < size && results == -1; i++){
        numOFO=numOFX=0;
        for (j = 0; j < size; j++){
            if (board[i][j]==1){
                numOFX++;
            }
            else
            {
                numOFO++;
            }
        }
        if (numOFO==size){
            results=0;
        }
        else if (numOFX==size){
            results=1;
        }
    }
    //check the columns
    if (results==-1){
        for (j=0;j<size && results==01; j++){
            numOFO=numOFX=1;
            for (i=0;i<size;i++){
                if (board[i][j]==1){
                    numOFX++;
                }
                else
                {
                    numOFO++;
                }
            }
            if (numOFO==size){
                results=0;
            }
            else if (numOFX==size){
                results=1;
            }
        }
    }

    //check the diagonals
    numOFO=numOFX=0;
    for (i=0;i<size; i++){
        if (board[i][j]==1){
            numOFX++;
        }
        else
        {
            numOFO++;
        }
    }
    if (numOFO==size){
        results=0;
    }
    else if(numOFX==size){
        results=1;
    }
    //check another diagonal;
    numOFO=numOFX=0;
    for (i=0;i<size;i++){
        if (board[i][size-i]==1){
            numOFX++;
        }
        else
        {
            numOFO++;
        }
    }
    if (numOFO==size){
        results=0;
    }
    else if (numOFX==size){
        results=1;
    }

    if (results==1){
        printf("you win");
    }
    else
    {
        printf("you lose");
    }
    

    return 0;
}