#include <stdio.h>

int main(int argc, char **argv)
{
    struct hostent *host;
    int err, i, sock, start, end;
    char hostname[100];
    struct sockaddr_in sa;
    
    printf("Enter hostname or ip: ");
    gets(hostname);
    
    printf("\nEnter first portnumber: ");
    scanf("%d", &start);
    
    printf("\nEnter end port number: ");
    scanf("%d", &end);
    
    strncpy((char*) &sa, "", sizeof sa);
    sa.sin_family = AF_INET;
}
