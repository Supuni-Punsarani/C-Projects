#include <stdio.h>
#define N 50
void main(){
    int rows,columns,elements,i,j,A[N][N],X[N],Y[N],p,sum;
    printf("How many rows do you want for table A?\n");
    scanf("%d",&rows);
    printf("How many columns do you want for table A?\n");
    scanf("%d",&columns);
    printf("How many elements do you want for list X?\n");
    printf("Reminder!!! Please enter same values for number of table's columns and list's elements\n");
    scanf("%d",&elements);
    if(columns!=elements){
            printf("Sorry!!! You entered table's columns and list's elements are mismatched");}
    else{
        printf("Enter values for rows and columns:");
        for(i=0;i<rows;i++){
                for(j=0;j<columns;j++){
                     scanf("%d",&A[i][j]);
                }
        }
        printf("Entered table is:\n");
        for(i=0;i<rows;i++){
                for(j=0;j<columns;j++){
                     printf("%d\t",A[i][j]);
                }
                printf("\n");
        }
        printf("Enter values for list:");
        for(i=0;i<elements;i++){
                scanf("%d",&X[i]);
        }
        printf("\nEntered list is:\n");
        for(i=0;i<elements;i++){
                printf("%d",X[i]);
                printf("\n");
        }

        for(i=0;i<rows;i++){
            for(j=0;j<elements;j++){
                sum=0;
                for(p=0;p<elements;p++){
                   sum=sum+(A[i][p]*X[p]);
                   Y[i]=sum;
                }
            }
        }
        printf("You got the answer:\n");
         for (i=0;i<rows;i++)
        {
            printf("%d",Y[i]);
            printf("\n");
        }

    }
        }






