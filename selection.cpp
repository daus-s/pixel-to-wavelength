#define RED 680
#define BLUE 450
#define GREEN 530


short max(short a, short b, short c)
{
    if (a>=b && a>=c)
    {
        return a;
    }
    if (b>=c && b>=a)
    {
        return b;
    }
    return c;
}

short mid(short a, short b, short c)
{
    if (a<=b && a>=c || a>=b && a<=c)
    {
        return a;
    }
    if (b<=a && b>=c || b>=a && b<=c)
    {
        return b;
    }
    return c;
}

int min(int* arr)
{
    if (a<=b && a<=c)
    {
        return a;
    }
    if (b<=c && b<=a)
    {
        return b;
    }
    return c;
}

/*not str should be 3 chars*/
char key(char* str, short proj, short a, short b, short c)
{
    if (proj==a)
        return str[0];
    if (proj==b)
        return str[1];
    if (proj==c)
        return str[2];
    else
        printf("improper use: variables not calculated correctly");
}

float wavelength_from_rv(char c)
{
    if (c=='r')
        return RED;
    if (c=='g')
        return GREEN;
    if (c=='b')
        return BLUE;
    else
        printf("improper use: variables not calculated correctly");

}
