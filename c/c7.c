#include <stdio.h>
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int a[10][10], b[10][10], result[10][10];
  scanf("%d%d", &m, &n);
  scanf("%d%d", &p, &q);
  for (  c = 0 ; c < m ; c++ )
    for ( d = 0 ; d < n ; d++ )
      scanf("%d", &a[c][d]);
  if ( n != p )
    printf("Matrix multiplication can't be performed\n");
  else
  {
    for ( c = 0 ; c < p ; c++ )
      for ( d = 0 ; d < q ; d++ )
        scanf("%d", &b[c][d]);
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
      {
        for ( k = 0 ; k < p ; k++ )
        {
          sum = sum + a[c][k]*b[k][d];
        }
        result[c][d] = sum;
        sum = 0;
      }
    }
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
        printf("%d ", result[c][d]);
    }
  }
  return 0;
}