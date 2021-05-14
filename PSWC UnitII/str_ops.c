#include <stdio.h>
#include <string.h>

void get_strings (char *str1, char *str2)
{
    printf ("Key in the first string:");
    scanf ("%s", str1);

    printf ("Key in the second string:");
    scanf ("%s", str2);

    printf ("The length of the first string is %d\n", strlen (str1));
    printf ("The length of the second string is %d\n", strlen (str2));

    printf ("Address of str1 is %p\n", str1);
    printf ("Address of str2 is %p\n", str2);
}
  

int main (void)
{
    char str1 [35], str2 [50];
    char *ptr, srch;
    int res, count;

    get_strings (str1, str2);

    printf ("Now going for strcmp function\n");
    res = strcmp (str2, str1);
    printf ("The result of comparison is %d\n", res);

    printf ("Now going for strcat function\n");
    ptr = strcat (str2, str1);
    printf ("After strcat ptr is %p string is %s\n", ptr, ptr);

    printf ("Now going for strcpy function\n");
    printf ("Key in the string to be copied:");
    scanf ("%s", str1);
    ptr = strcpy (str2, str1);

    printf ("After strcpy String 2 is %s string 1 is %s ptr is %p\n", str2, str1, ptr);

    printf ("Now going for strncmp function\n");
    get_strings (str1, str2);
    printf ("How many characters should be compared?");
    scanf ("%d", &count);
    res = strncmp (str2, str1, count);
    printf ("The result of strncmp is %d\n", res);
    printf ("String 2 is %s\n", str2);
    printf ("Now going for strchr function\n");
    printf ("Key in the character to search for:");
    scanf (" %c", &srch);
    ptr = strchr (str2, srch);
    printf ("ptr is %p after strchr\n", ptr);
    printf ("Now going for strrchr function\n");
    ptr = strrchr (str2, srch);
    printf ("ptr is %p after strrchr\n", ptr);

    return 0;
}
