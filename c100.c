#include<stdio.h>
int main(){
    int n1,n2,n3,Max;
    printf("���� 3���� ����� �Է��ϼ���:");
    scanf("%d %d %d", &n1,&n2,&n3);
    Max=n1;
    Max=n2>Max?n2:Max;
    Max=n3>Max?n3:Max;
    printf("�ִ�:%d\n",Max);
    return 0;
}