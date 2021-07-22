#include <cs50.h>
#include <stdio.h>

int main(void)
{
   //Створюємо змінні для висоти, пробілів і хешів
    int height;
    int spaces;
    int hashes;

do
    {
        height = get_int("Height: ");
    }
    //встановлюємо умови
    while (height < 1 || height > 8);
    //створюємо рядки
    for (int i = 1; i <= height; i++)
    {
     //Створюємо стовпці пробілів
       for (spaces = (height - i); spaces > 0; spaces--)
        {
            printf(" ");
        }
      //Створюємо стовпці хешів
        for (hashes = 1; hashes <= (i); hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
