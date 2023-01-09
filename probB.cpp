#include<stdio.h>
#define LLONG_MAX  9223372036854775807LL


void temp(int position, int partition, int *array, int size, long long limit){
	long long count = 0;
	int current = -1, i;
	for (i = position; i >= 0; i--)
    {
		if (count + array[i] > limit || i == partition - 2){
			temp(i, partition - 1, array, size, limit); current = i; break;
		}
		count += array[i];
	}
	if (current >= 0) printf("; ");
	for (i = current + 1; i <= position; i++){
		printf("%d%s", array[i], i == size - 1 ? "" : " ");
	}
}
long long int searching(int *array, int size, int partition){
	long long int left = 1, right = LLONG_MAX, limit = LLONG_MAX;
	while (left < right){
		long long int mid = left + (right - left) / 2, sum = 0;
		int status = -1, index = 0, current = 1;
		while (index < size){
			if (array[index] > mid) status = 0;
			if (sum + array[index] > mid) { current++; sum = 0; }
			if (sum <= mid) { sum += array[index]; index++; }
		}
		if (current <= partition) status = 1;
		if (status == -1) status = 0;
		if (status) { limit = (limit < mid) ? limit : mid; right = mid; }
		else left = mid + 1;
	}
	return limit;
}
void result()
{
    int input, i, j; scanf("%d", &input); getchar();
    for (i = 1; i <= input; i++){
        int cities, staff; 
		scanf("%d %d", &cities, &staff); getchar();
        int values[505];
        for (j = 0; j < cities; j++)
			scanf("%lld", &values[j]);
        long long int limit = searching(values, cities, staff);
		temp(cities - 1, staff, values, cities, limit);
		printf("\n");
    }
}

int main(){ 
    result(); 
}