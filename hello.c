#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    char temp[256];

    FILE *fin = fopen( "Host_file.txt", "r" );
    if( !fin ) {
        printf( "You can't open Host_file.txt because the Host_file.txt not in this folder.\n" );
        return -1;
    }
    if( fgets( temp, 256, fin ) )
        printf( "%s\n", temp );
    fclose( fin );

    char temp_write[] = "Writting successful!!\n";
    FILE *fout = fopen( "Target_file.txt", "w" );
    if( !fout ) {
        printf( "You can't write Target_file.txt!!\n" );
        return -1;
    }
    if( !fputs( temp_write, fout ) )
        printf( "Writting successful!!\n" );
    fclose( fout );
    return 0;
}
