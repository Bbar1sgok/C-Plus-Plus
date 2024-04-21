#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Kullanıcıdan para üstünü al
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);

    // Kuruşları cente dönüştür ve yuvarla
    int cents = round(change * 100);

    // Bozuk paraları say
    int coins = 0;

    // Quarter (25 cent) sayısı
    coins += cents / 25;
    cents %= 25;

    // Dime (10 cent) sayısı
    coins += cents / 10;
    cents %= 10;

    // Nickel (5 cent) sayısı
    coins += cents / 5;
    cents %= 5;

    // Penny (1 cent) sayısı
    coins += cents;

    // Minimum bozuk para sayısını yazdır
    printf("%d\n", coins);
}
