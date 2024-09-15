/* 
*  Lecture_3
*  Task_2
*  Task: ‚ўҐбвЁ ваЁ жҐ«ле зЁб«  Ё ­ ©вЁ Ёе бг¬¬г Ё Їа®Ё§ўҐ¤Ґ­ЁҐ
*/

#include <stdio.h>
int main() {
    int a, b, c; // ЇҐаҐ¬Ґ­­лҐ ¤«п ўў®¤Ё¬ле зЁбҐ«
    int sum, prod; //ЇҐаҐ¬Ґ­­лҐ ¤«п а бзҐв®ў
    printf("‚ўҐ¤ЁвҐ зҐаҐ§ Їа®ЎҐ« ваЁ жҐ«ле зЁб« , ­ ¦¬ЁвҐ Enter\n");
    scanf("%d%d%d", &a, &b, &c); // дг­ЄжЁп бзЁвлў ­Ёп ¤ ­­ле, ў дг­жЁо ЇҐаҐ¤ Ґвбп  ¤аҐб ЇҐаҐ¬Ґ­­ле зҐаҐ§ & (гЄ § вҐ«м)
    //printf("%d %d %d\n", a, b, c); 
    sum = a+b+c; 
    prod = a*b*c;
    printf("%d+%d+%d=%d\n", a, b, c, sum); 
    printf("%d*%d*%d=%d\n", a, b, c, prod);
    getchar();
    getchar();
    return 0;
}

