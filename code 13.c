#include<stdio.h>
int main()
{
    const int username = 123;
    const int passwd = 123;
    int username_ip, passwd_ip;
    printf("enter username & password\n");
    scanf("%d%d", &username_ip, &passwd_ip);
    if(username == username_ip && passwd == passwd_ip)
    {
        printf("user is authorized");
    }
    else{
            printf("user is not authorized");
    }
    return 0;
}
