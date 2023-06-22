#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];	
    char b[30];		
    char c[30];		
    int j = 0, maxlength = 0;

    gets(a); // input

    for(int i = 0; i <= strlen(a); i++){
        if(a[i] != 32 && a[i] != '\0'){
	    b[j++] = a[i];
	}else{
            b[j] = '\0';
            if(strlen(b) > maxlength){
                strcpy(c, b);		
                maxlength = strlen(b);	
            }
            j = 0;
        }
    }
    puts(c); 
    return 0;
    
}
