#include <iostream>
#include "dothi2.h"
using namespace std;
FILE *input2, *input2_1, *input2_2;
// mo file
void moFile()
{
	input2= fopen("input2.txt","r");
    input2_1= fopen("input2_1.txt","w");
    input2_2= fopen("input2_2.txt","w");
    if(input2==NULL || input2_1==NULL || input2_2==NULL)
    {
    	printf("Loi mo file!");
	}
}

// dong file
void dongFile()
{
	fclose(input2);
	fclose(input2_1);
	fclose(input2_2);
}

int main()
{
	int A[MAX][MAX];
	int n=5;
	moFile();
	docMaTran(input2, A, n); 
	inDsKe(input2_1, A, n); 
	inDsCanh(input2_2, A, n);
	dongFile();
	
}