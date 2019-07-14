#include <stdio.h>

int main(){
    FILE *pFile = NULL;
    FILE *oFile = NULL;
    char fileName[] = "out.csv";

	pFile = fopen( "test.txt", "r" );
	if( pFile != NULL )
	{
		char strTemp[255];
		char *pStr;
        int maxLine = 100000;
        int i=0, j=0;

		while( !feof( pFile ) )
		{
            if ( i >= maxLine ) {
                i = 0;
                j += 1;
            }

			pStr = fgets( strTemp, sizeof(strTemp), pFile );
            printf ( "%s", pStr );

            sprintf(fileName, "%d.csv", j);

            oFile = fopen( fileName, "a" );
            fprintf(oFile, "%s", pStr);
            i += 1;
		}
		fclose( pFile );
	}
	else
	{
		//에러 처리
	}

	return 0;
}