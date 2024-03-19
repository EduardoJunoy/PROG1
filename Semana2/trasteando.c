int main() {
    char c1, c2;

    printf("Introduce una letra: ");
    scanf("%c", &c1);
    printf("Introduce otra letra: ");
    scanf("\n%c", &c2); /* introducir \n antes de %c */

    printf("Has introducido las letras %c y %c\n", c1, c2);
    return 0;
}