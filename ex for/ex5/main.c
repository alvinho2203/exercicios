int main()
{
int fat, n=10;

for(fat = 1; n > 1; n = n - 1)
fat = fat * n;

printf("\nFatorial calculado: %d", fat);
return 0;
}
