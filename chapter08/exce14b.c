// 改写exce11的全局变量 
#include <stdio.h>

float sum;

float arraySum(int n, float array[n]){
	int i;
	
	for(i = 0; i < n; ++i)
		sum += array[i];
		
	return sum;
} 

int main(void){
	float array[11] = {1.0, 5.1, 5.2, 1.3, 0.4, 9.5, 
					6.7, 9.8, 8.9, 2.0, 8.1};
	
	sum = arraySum(11, array);
	
	printf("该数组所有元素的和为:%.2f\n", sum);
	
	return 0;
}
