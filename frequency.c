#include <stdio.h>
int main()
{

    char s[10001];
    scanf("%s", &s);
    // int l= strlen(s);
    // int n[26];
    int n[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {

        int val = s[i];

        n[val - 97] = n[val - 97] + 1;
    }

    for (int i = 0; i < 26; i++)
    {
        int val = s[i];
        if (n[i] != 0)
        {
            printf("%c %d\n", i + 'a', n[i]);
        }
    }

    return 0;
}
