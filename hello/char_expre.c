#include <stdio.h>

int main()
{
    char c1 = 'a';  //97
    char c2 = 0x62;
    char c3 = '0';
    char c4 = 0;

    char c5 = '\n';
    
    char c6 = 2;

    printf("%c, %d, 0x%x\n", c1, c1, c1);   // a, 97, 0x61
    printf("%c, %d, 0x%x\n", c2, c2, c2);   // b, 98, 0x62
    printf("%c, %d, 0x%x\n", c3, c3, c3);   
    printf("%c, %d, 0x%x\n", c4, c4, c4);    
    printf("%c, %d, 0x%x\n", c5, c5, c5);    
    printf("%c, %c, %d, 0x%x\n", c5, c5 + 48, c5, c5);  // ���� '0'�� ASCII ������ 48�̴�. ���� '2'�� ����ϱ� ���ؼ� 0 ���� �����ָ� �ȴ�  

    return 0;
}