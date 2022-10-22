#include <iostream>
#include "dothi2.h"
using namespace std;
FILE *input2_2, *output2_2;

void moFile()
{
    input2_2= fopen("input2_2.txt","r");
    output2_2= fopen("output2_2.txt","w");
    if(input2_2==NULL || output2_2==NULL)
    {
    	printf("Loi mo file!");
	}
}

void dongFile()
{
	fclose(input2_2);
	fclose(output2_2);
}

int main()
{
	int A[MAX][MAX];
	int n=5;
	moFile();
	
	docDsCanh(input2_2, A, n);
	inMaTran(output2_2, A, n);
	fprintf(output2_2, "%s", "Danh sach ke\n");
	inDsKe(output2_2, A, n);
	fprintf(output2_2, "%s", "Dinh   Bac vao   Bac ra\n");
	inBacCuaDinh(output2_2, A, n);
	
	dongFile();	
}