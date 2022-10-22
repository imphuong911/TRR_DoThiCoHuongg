#define MAX 100

// doc ma tran
void docMaTran(FILE *fin, int A[MAX][MAX], int n)
{
	for(int i=0; i<n; i++)
    {	
    	for(int j=0; j<n; j++)	
    	{	
    		fscanf(fin,"%d",&A[i][j]);
        }    
    }
}

void docDsKe(FILE *fin, int A[MAX][MAX], int n)
{
	char buf[MAX];
    int i=-1;
    while(fgets(buf, MAX, input2_1)!=NULL)
	{
		i++;
		for(int j=0; j<sizeof(buf); j++)
		{
		
			int c = buf[j]-'0';
			if(c>0)
			{
				A[i][c-1]=1;
				printf("%d %d ", i, c-1);
			}		
		}
		for(int k=0; k<MAX; k++) {buf[k]=' ';}
	}
}

void docDsCanh(FILE *fin, int A[MAX][MAX], int n)
{
	int d, c;
    for(int i=0; i<n; i++)
    {	
    	for(int j=0; j<n; j++)	
    	{	
    		fscanf(fin,"%d %d", &d, &c);
    		A[d-1][c-1]=1;
    	}
    }
}

void inMaTran(FILE *fout, int A[MAX][MAX], int n)
{
	for(int i=0; i<n; i++)
    {	
    	for(int j=0; j<n; j++)	
    	{	
    		fprintf(fout, "%d ", A[i][j]);
        } 
		fprintf(fout, "%s", "\n");  
    }
}

void inDsKe(FILE *fout, int A[MAX][MAX], int n)
{
	int T[MAX], k=0, m;
	for(int i=0; i<n; i++)
    {	
        m=k;
    	for(int j=0; j<n; j++)	
    	{	
    		if(A[i][j]==1)
    		{
    			T[k]=j+1;
    			k++;
			}
        }
        for(int l=m; l<k; l++)
        {
        	fprintf(fout,"%d ",T[l]);
		}
		fprintf(fout,"\n");    
    }
}

void inDsCanh(FILE *fout, int A[MAX][MAX], int n)
{
	for(int i=0; i<n; i++)
    {	
    	for(int j=0; j<n; j++)	
    	{	
    		if(A[i][j]==1)
    		{
    			fprintf(fout,"%d %d",i+1,j+1);
    			fprintf(fout,"\n");
			}
        }    
    }
}


void inBacCuaDinh(FILE *fout, int A[MAX][MAX], int n)
{
	for(int i=0; i<n; i++)
    {	
    	int sumRa=0, sumVao=0;
    	for(int j=0; j<n; j++)	
    	{	
    		sumRa+=A[i][j];
    		sumVao+=A[j][i];
        }    
        fprintf(fout, "%d \t %d \t %d\n", i+1, sumVao, sumRa);
    }
}
