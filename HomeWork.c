#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void A();
void R();
void U();
int main() {
	
    int Chioce;
	int CharD1,Student,Grade;
	
	X: 
    printf("\n\n�C��:(A)�C���e��(B)���Z�e��(C)�ײv�ഫ�e��(Q)���}���A�����{��");
	printf("\n\n��ܹC��: ");
	scanf("%d",&Chioce);  //��ܭ��@�ӵ{�� 
	
    CharD1=(Chioce=getchar()); //�N��ܪ����ܦ�char 
    switch(CharD1)
	{
		case 'A':{ A();     //�I�sA��� 
			       break;
		         } 
		case 'B':{ R();     //�I�sB��� 
				    break;	}
	
		case 'C': {U();     //�I�sU��� 
			break;
		}

		case 'Q':{goto END;    
			    break;		} 
	    default:{ printf(" �O�x�F ");
			break;
		}
	}
    goto X;
    END:
	return 0;
}
void R()        //�P�_���Z���� 
{   int Student,i,Grade;
	
	printf("��J�ǥͤH��: ");
    scanf("%d",&Student);
	               
                   for(i=1;i<=Student;i++)
	               {
	               	printf("��J�ǥͦ��Z: ");
	                scanf("%d",&Grade);
	                
	                if(Grade>=90) {printf("A+\n");}                      
					else if(Grade>=80&&Grade<=89){	printf("A\n");}
					else if(Grade>=70&&Grade<=79) {printf("B\n");} 
					else if(Grade>=60&&Grade<=69) {printf("C\n");} 
					else {printf("D\n");} 
					}
}

void U()   //�ײv���� 
{   int Chioce;
	float UAS,TWD;
	printf("��J�I���v:");
    scanf("%f",&TWD);
    printf("(�������x����J: 1  �x����������J: 2):");
    scanf("%d",&Chioce);
    printf("�I���h��:");
    scanf("%f",&UAS);
	if (Chioce=1){printf("%f,�������x��,%f",UAS,UAS*TWD);}
	else {	printf("%f,�x��������,%f\n",UAS,UAS/TWD);}	
}

void A()    //���A�`�� 
{   srand(time(NULL));
    char b[5][16]={{"�ߥ�"},{"�y��"},{"�V�k��"},{"���U"},{"�V����"}};  //�إ��ܼƪ����O���� 
    int a[10]={0},i;
	    for(i=0;i<=9;i++)   //����10�D 0~5 �H�����O�Ʀr 
        {
         a[i]=rand()%5;    
		}
		for(i=0;i<=9;i++)
        {
        printf("%d ",a[i]+1);   //�L�X10�D���Ʀr
		}
		printf("\n");
		for(i=0;i<=9;i++)
        {
        if(a[i]==1&&a[i+1]!=0||a[i]==3&&a[i+1]!=0) {printf("%s\n\n",b[a[i]]);printf("�L�k����!\n"); break;} //�P�_���O�O�_����������O 
		else {printf("%s\n\n",b[a[i]]);}
		}
}
