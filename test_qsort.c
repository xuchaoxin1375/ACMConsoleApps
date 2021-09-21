#include <stdio.h>
#include <stdlib.h>

int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n;

    printf("排序之前的列表：\n");
    for (n = 0; n < 5; n++) {
        printf("%d ", values[n]);
    }

    qsort(values, 5, sizeof(int), cmpfunc);

    printf("\n排序之后的列表：\n");
    for (n = 0; n < 5; n++) {
        printf("%d ", values[n]);
    }

    return(0);
}
//让我们编译并运行上面的程序，这将产生以下结果：
//
//排序之前的列表：
//88 56 100 2 25
//排序之后的列表：
//2 25 56 88 100

