#include <iostream>
#include "dothi2.h"
using namespace std;
FILE *input2_1, *output2_1;
// mo file
void moFile()
{
    input2_1= fopen("input2_1.txt","r");
    output2_1= fopen("output2_1.txt","w");
    if(input2_1==NULL || output2_1==NULL)
    {
    	printf("Loi mo file!");
	}
}

// dong file
void dongFile()
{
	fclose(input2_1);
	fclose(output2_1);
}

int main()
{
	int A[MAX][MAX];
	int n=5;
	moFile();
	docDsKe(input2_1, A, n);
	inMaTran(output2_1, A, n);
	fprintf(output2_1, "%s", "Danh sach canh\n");
	inDsCanh(output2_1, A, n);
	fprintf(output2_1, "%s", "Dinh  Bac vao  Bac ra\n");
	inBacCuaDinh(output2_1, A, n);
	
	dongFile();	
}