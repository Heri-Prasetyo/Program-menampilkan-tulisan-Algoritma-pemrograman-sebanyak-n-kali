#include<stdio.h>
#include<conio.h>

int perulangan (int n);
int main(void)
{
    int n;
    printf("Program perulangan sebanyak n kali");
    printf("Masukan Nilai (n): ");
    scanf("%d",&n);
    perulangan (n);
    getch ();

}
int perulangan(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("Algoritma dan pemrograman\n");
    return (i);
}
