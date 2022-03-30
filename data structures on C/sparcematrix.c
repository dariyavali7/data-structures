
#include <stdio.h>
int main()// The driver program
{
	int intMatrix[10][10],/*initial matrix of int to hold given data*/
	    i,j,                  /*loop control variable               */
    	countNZEle=0;         /*count of non-Zero elements          */
    printf("Enter 16 elements separated by space. \n");
    for(i=0; i<4; ++i)
        { //outer for(i) row#
    	    for(j=0; j<4; ++j)                     //inner for(j) column#  
    	        scanf("%d", &intMatrix[i][j]);    //Read elements of the matrix
	    }
	/*Following section counts the nonZero elements*/
	for (i=0; i<4; ++i)
    	{
		    for(j=0; j<4; ++j)
		        if (intMatrix[i][j] != 0)
		        countNZEle++;
    	}//end of outer for(i)
    	        if (countNZEle<=8)
    	        printf("The given matrix is Sparse Matrix with %d nonZero elements. \n",countNZEle);
                else 
                printf("The given matrix is not a Sparse Matrix \n");
    for(i=0; i<4; ++i)
        { //outer for(i) row#
            for (j=0; j<4; ++j)            //inner for(j) column#
            printf("%d", intMatrix[i][j]); //Read elements of the matrix
			printf("\n");  
		}
		/*The following code segment represent a sparse matrix in Multidimensional array*/
		int compactMatrix[3][countNZEle], /*this matrix will store (row,col)=nonZero values*/
		    k=0;                          /*control variable to store the non-zero element*/
	for(int i = 0; i < 4; i++)
	    for (int j = 0; j < countNZEle-1; j++)
		        if (intMatrix[i][j]>0)
				{
					compactMatrix[0][k] = i;
					compactMatrix[1][k] = j;
					compactMatrix[2][k] = intMatrix[i][j];
					//printf("\n(i=%d, j=%d)=%d",i,j,intMatrix[i][j]);
					k++;	
				 } 
	printf("\nThe elements are. \n");
	for(int j=0; j<countNZEle; j++)
	{//outer for(j) loop
	    for(int i=0; i<3; i++)
	        printf("%d",compactMatrix[i][j]);
	        printf("\n");
	}//end for(j)
}//end of main()

