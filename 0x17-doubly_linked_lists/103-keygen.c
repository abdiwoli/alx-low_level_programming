#include <stdio.h>
#include <stdlib.h>
#include <string.h>


unsigned int simple_hash(const char *str)
{
    unsigned int hash = 5381;
    int c;

    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c;
    }

    return hash;
}

void generate_key(const char *username, char *key)
{
    sprintf(key, "%u", simple_hash(username));
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s username\n", argv[0]);
        return 1;
    }

    char key[20];

    generate_key(argv[1], key);

    printf("Key for %s: %s\n", argv[1], key);

    return 0;
}
