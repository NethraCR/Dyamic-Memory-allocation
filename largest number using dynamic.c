#include <stdio.h>
#include <stdlib.h>

int main()
 {
  int n;
  int *data;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);

  // Allocating memory for n elements
  data = (int *)calloc(n, sizeof(int));
  if (data == NULL) {
  printf("Error!!! memory not allocated.");
  exit(0);
  }

  // Storing numbers entered by the user.
  for (int i = 0; i < n; i++)
    {
  printf("Enter number%d: ",i+1);
  scanf("%d", data+i);
  }

  // Finding the largest number
  for (int i = 1; i < n; i++)

    {
    if (*data < *(data + i))
    {
      *data = *(data + i);
    }
  }
  printf("Largest number = %d", *data);

  free(data);

  return 0;
}
