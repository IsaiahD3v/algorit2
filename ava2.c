#include <stdio.h>
int main()
{

int day, month, year;
	printf("data de nascimento\t");

	printf("dia\n");
	scanf("%d", &day);
	printf("mes\n");
	scanf("%d", &month);
	printf("ano\n");
	scanf("%d", &year);

if (day > 31 || month  > 12 || year < 1920 || year > 2025);
{
    printf("invalido");
}



return(0);
}
