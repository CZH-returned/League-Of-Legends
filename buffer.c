#include <stdio.h>

void flag()
{
    printf("Bienjoué");
    system("cat passwd.txt");
}

int main(int argc, char **argv)
{
    char buffer[128];
    printf("Mot de passe : ");
    gets(buffer);
    printf("votre mot de passe est : %s", buffer);
    return (0);
}