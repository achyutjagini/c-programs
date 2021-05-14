#include <stdio.h>
int main(void)
{
	int count = 0; // Declared in outer block
	do
	{
		int count = 0; // This is another variable called count
		++count; // this applies to inner count
		printf("count = %d\n", count);
	}
	while( ++count <= 5); 
	printf("count = %d\n", count); 
	// Inner count is dead, this is outer count
	return 0;
}