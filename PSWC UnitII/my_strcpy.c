/* Function to copy one string to another */*/
void my_strcpy (char dest[]. char src[])
{
	int count;
	
	for (count = 0; src [count] != '\0'; count ++)
                        dest[count] = src[count];
	dest[count] = '\0';
}

int main (void)
{
     char src [25], dest [25];

    printf ("Key in a string:");
    scanf ("%s", src);
    my_strcpy (dest, src);
    printf ("The copied string is %s\n", dest);
    return 0;
}


