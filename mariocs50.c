#include <cs50.h>
#include <stdio.h>


void draw_pyramid(int height);
void draw_spaces(int num_spaces);
void draw_hashes(int num_hashes);

int main(void)
{
   
    int height;
    do
    {
        height = get_int("Piramit yüksekliği (1 ile 8 arasında): ");
    }
    while (height < 1 || height > 8);

   
    draw_pyramid(height);
}


void draw_pyramid(int height)
{
    for (int i = 1; i <= height; i++)
    {
       
        draw_spaces(height - i);

        
        draw_hashes(i);


        printf("  ");

       
        draw_hashes(i);

        
        printf("\n");
    }
}


void draw_spaces(int num_spaces)
{
    for (int i = 0; i < num_spaces; i++)
    {
        printf(" ");
    }
}


void draw_hashes(int num_hashes)
{
    for (int i = 0; i < num_hashes; i++)
    {
        printf("#");
    }
}
