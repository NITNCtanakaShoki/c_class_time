#include <stdio.h>

int main(void)
{
    int input = 0;
    printf("時刻を入力してください: ");
    scanf("%d", &input);

    switch (input) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            puts("夜です。");
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            puts("朝です。");
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            puts("昼です。");
            break;
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
            puts("夜です。");
            break;
        default:
            puts("入力エラーです。 0~24で入力してください。");
    }
    return 0;
}