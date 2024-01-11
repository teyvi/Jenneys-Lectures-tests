#include <stdio.h>
int main()
{

float arr[2][7];

//claculate byte size
size_t byteSize = sizeof(arr);

//calculate number of elements
size_t numElements = sizeof(arr) / sizeof(float);

printf("Byte size of float[2][7]: %zu bytes\n", byteSize);
printf("Number of elements in float[2][7]: %zu\n",numElements);

return 0;


}
