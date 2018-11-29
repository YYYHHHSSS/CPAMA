#include <stdio.h>

int main(void)
{
	float r, pai = 3.14f;
	printf("请输入球体半径：");
	scanf("%f", &r);
	printf("%.2f", 4.0f / 3.0f * pai * (r * r * r));
	
	return 0;
}

