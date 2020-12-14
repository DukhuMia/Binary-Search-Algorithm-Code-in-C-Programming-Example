#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, Dukhu[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d elements One by One\n", n);
    // Read array elements
    for (c = 0; c < n; c++)
    scanf("%d", &Dukhu[c]);

  printf("Please enter an element to search\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;
// search number in input Array from index 1 to element Count -1

  while (first <= last)
    {
        if (Dukhu[middle] < search)
          first = middle + 1;
        else if (Dukhu[middle] == search)
        {
          printf("%d Element is found | The Element index no is %d.\n", search, middle+1);
          break;
        }
        else
          last = middle - 1;

        middle = (first + last)/2;
   }
  if (first > last)
    printf("%d Element Not Found (-1).\n", search);

  return 0;
}
