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
    printf("\n\n遊戲:(A)遊戲畫面(B)成績畫面(C)匯率轉換畫面(Q)離開選單，結束程式");
	printf("\n\n選擇遊戲: ");
	scanf("%d",&Chioce);  //選擇哪一個程式 
	
    CharD1=(Chioce=getchar()); //將選擇的值變成char 
    switch(CharD1)
	{
		case 'A':{ A();     //呼叫A函數 
			       break;
		         } 
		case 'B':{ R();     //呼叫B函數 
				    break;	}
	
		case 'C': {U();     //呼叫U函數 
			break;
		}

		case 'Q':{goto END;    
			    break;		} 
	    default:{ printf(" 別鬧了 ");
			break;
		}
	}
    goto X;
    END:
	return 0;
}
void R()        //判斷成績等級 
{   int Student,i,Grade;
	
	printf("輸入學生人數: ");
    scanf("%d",&Student);
	               
                   for(i=1;i<=Student;i++)
	               {
	               	printf("輸入學生成績: ");
	                scanf("%d",&Grade);
	                
	                if(Grade>=90) {printf("A+\n");}                      
					else if(Grade>=80&&Grade<=89){	printf("A\n");}
					else if(Grade>=70&&Grade<=79) {printf("B\n");} 
					else if(Grade>=60&&Grade<=69) {printf("C\n");} 
					else {printf("D\n");} 
					}
}

void U()   //匯率換算 
{   int Chioce;
	float UAS,TWD;
	printf("輸入兌換率:");
    scanf("%f",&TWD);
    printf("(美金換台幣輸入: 1  台幣換美金輸入: 2):");
    scanf("%d",&Chioce);
    printf("兌換多少:");
    scanf("%f",&UAS);
	if (Chioce=1){printf("%f,美金換台幣,%f",UAS,UAS*TWD);}
	else {	printf("%f,台幣換美金,%f\n",UAS,UAS/TWD);}	
}

void A()    //狀態循環 
{   srand(time(NULL));
    char b[5][16]={{"立正"},{"稍息"},{"向右轉"},{"坐下"},{"向後轉"}};  //建立變數的指令種類 
    int a[10]={0},i;
	    for(i=0;i<=9;i++)   //產生10道 0~5 隨機指令數字 
        {
         a[i]=rand()%5;    
		}
		for(i=0;i<=9;i++)
        {
        printf("%d ",a[i]+1);   //印出10道的數字
		}
		printf("\n");
		for(i=0;i<=9;i++)
        {
        if(a[i]==1&&a[i+1]!=0||a[i]==3&&a[i+1]!=0) {printf("%s\n\n",b[a[i]]);printf("無法執行!\n"); break;} //判斷指令是否滿足條件指令 
		else {printf("%s\n\n",b[a[i]]);}
		}
}
