#include <stdio.h>

int main()
{
    int r,s,rs=0;
    scanf("%d",&rs);
    r=rs/10;s=rs%10;
    if(rs>10&&rs<60&&s!=0)
    {
    	switch(s)
		{
			case 1 : printf("Faint signals, barely perceptible, ");break;
    		case 2 : printf("Very weak signals, ");break;
			case 3 : printf("Weak signals, ");break;
			case 4 : printf("Fair signals, ");break;
			case 5 : printf("Fairly good signals, ");break;
			case 6 : printf("Good signals, ");break;
			case 7 : printf("Moderately strong signals, ");break;
			case 8 : printf("Strong signals, ");break;
			case 9 : printf("Extremely strong signals, ");break;
		}
		switch(r)
		{
			case 1 : printf("unreadable.");break;
			case 2 : printf("barely readable, occasional words distinguishable.");break;
			case 3 : printf("readable with considerable difficulty.");break;
			case 4 : printf("readable with practically no difficulty.");break;
			case 5 : printf("perfectly readable.");break;		
		}
	}
	return 0;
}
