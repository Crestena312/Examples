#include "ordered.h"
#include "random.h"
#include "backordered.h"
#include "Test.h"
#include "bulb.h"
#include "Shell.h"
#include "Shell2.h"
#include<stdio.h>
#include<stdlib.h>
#define l 10//������� ������� ��� ����������
#define p 6 //������� ������� ��� ����������
#define w 6//������� ��������� ��� ����������
int ***vect;//��������� ��������� �����
void Test(){
     vect = (int***) malloc(l*sizeof(int**));
 for (int k=0; k<l; k++)
 { vect[k] = (int**) malloc(p*sizeof(int*));
 for (int i=0; i<p; i++)
 vect[k][i] = (int*) malloc(w*sizeof(int));
 }
FillVector1(l,p,w,vect);//���������� �� ����������
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
ExchangeSort(l,p,w,vect);//������� ����������
printf("Bubl1:\n");
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
printf("\n");printf("\n");
FillVector2(l,p,w,vect);//���������� ��������
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
ExchangeSort(l,p,w,vect);//������� ����������
printf("Bubl2:\n");
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
printf("\n");printf("\n");
FillVector3(l,p,w,vect);//���������� �� ����������
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
ExchangeSort(l,p,w,vect);//������� ����������
printf("Bubl3:\n");
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
printf("\n");printf("\n");
FillVector1(l,p,w,vect);//���������� �� ����������
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
Shell_1(l,p,w,vect);//������� ����������� ����� �� ����� ����� �������
printf("Shell1.1:\n");
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
printf("\n");printf("\n");
FillVector2(l,p,w,vect);// ���������� ��������
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
Shell_1(l,p,w,vect);//������� ����������� ����� �� ����� ����� �������
printf("Shell1.2:\n");
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
printf("\n");printf("\n");
FillVector3(l,p,w,vect); //���������� �� ��������
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
Shell_1(l,p,w,vect);//������� ����������� ����� �� ����� ����� �������
printf("Shell1.3:\n");
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
printf("\n");printf("\n");
FillVector1(l,p,w,vect);// ���������� �� ���������
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
Shell_2(l,p,w,vect);//������� ����������� ����� �� ����� �������-����
printf("Shell2.1:\n");
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
printf("\n");printf("\n");
FillVector2(l,p,w,vect);//���������� ��������
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
Shell_2(l,p,w,vect);//������� ����������� ����� �� ����� �������-����
printf("Shell2.2:\n");
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
printf("\n");printf("\n");
FillVector3(l,p,w,vect);// ���������� �� ��������
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
Shell_2(l,p,w,vect);//������� ����������� ����� �� ����� �������-����
printf("Shell2.3:\n");
for(int i=0;i<l;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<w;k++){
            printf("%d ",vect[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
}
