int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r); // Should return 1

    r = wildcmp("hello", "h*l*o");
    printf("%d\n", r); // Should return 1

    r = wildcmp("abc", "a*c");
    printf("%d\n", r); // Should return 1

    r = wildcmp("main.c", "m*in.c");
    printf("%d\n", r); // Should return 1

    r = wildcmp("foo", "bar");
    printf("%d\n", r); // Should return 0

    return (0);
}

