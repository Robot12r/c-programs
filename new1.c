#include <stdio.h>
int main(void){
   int arr[] = {10, 20, 30, 40, 50};
      int n = sizeof(arr)/sizeof(arr[0]);
      int i;
      for (i = 0; i < n; i++)
         printf("%d  ", arr[i] * 2);
   return 0;
}