// 20221031_jhg_test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<stdio.h>

void initialization(void)
{
    printf("----------------------------------------------- \n\n");
    printf("Fuction 만들기 \n");
    printf("print문을 활용한 함수를 만들어 봅시다. \n\n");
    printf("----------------------------------------------- \n\n");
}
int add_void(void)
{
    int a, b, c;
    a = b = c = 0;
    a = 1;  b = 2;
    c = a + b;
   // printf("%d +%d = %d\n\n", a, b, c);
    return c;
}

int add_int(void)
{
    int a, b, c;
    a = b = c = 0;
    a = 1;  b = 2;
    c = a + b;
   // printf("%d +%d = %d\n\n", a, b, c);
    return c;
}

int add_int_input(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int subtract_int_input(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int multi_int_input(int a, int b)
{
    int c;
    c = a * b;
    return c;
}

double divide_int_input(int a, int b)
{
    double c;
    c = (double)a / (double)b;
    return c;
}

int max2_int(int a, int b)
{
    int c;
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }

    return c;
}

int min2_int(int a, int b)
{
    int c;
    if (a > b)
    {
        c = b;
    }
    else
    {
        c =a;
    }

    return c;
}

int round(double input)
{
    /*
    int result;
    result = (int)(input + 0.5);
    return result;
    */
    return (int)(input + 0.5);
}

int main(void)
{
    int a1, b1, c1;
    a1 = b1 = c1 = 0;
    a1 = 3;  b1 = 4;
    initialization();
    c1 = add_int_input(a1, b1);
    printf("%d + %d = %d\n\n", a1, b1, c1 );
    
    c1 = subtract_int_input(a1, b1);
    printf("%d - %d = %d\n\n", a1, b1, c1);

    
    c1 = multi_int_input(a1, b1);
    printf("%d * %d = %d\n\n", a1, b1, c1);

    printf("%d / %d = %lf\n\n", a1, b1, divide_int_input(a1, b1));


    printf("[%d : %d] = max : %d \n\n", a1, b1, max2_int(a1, b1));

    printf("[%d : %d] = min : %d \n\n", a1, b1, min2_int(a1, b1));

    printf("round(%.1lf) =%d \n\n", 3.65, round(3.65));

    return 1;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
