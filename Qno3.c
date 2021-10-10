#include <stdio.h>

int main() {
  int n, m;
  printf("Enter n m > ");
  scanf("%d %d", &n, &m);

  int arrayOneD[n*m];
  int arrayTwoD[n][m];
  for(int i = 0; i<n*m; i++)
    scanf("%d", &arrayOneD[i]);

  for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
      arrayTwoD[i][j] = arrayOneD[(i*m) + j];

  for(int i = 0; i<n; i++) {
    for(int j = 0; j<m; j++)
      printf("%d ", arrayTwoD[i][j]);
    printf("\n");
  }
  return 0;
}