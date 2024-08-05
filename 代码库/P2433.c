#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,d,e,x,x1,x2,n = 1,t = 4;
	double c,m,v,PI=3.141593;
	char s;
	scanf("%d",&a);
	switch (a) {
		case 1:
			printf("I love Luogu!");
			break;
		case 2:
			printf("%d %d",4+2,10-6);
			break;
		case 3:
			b = (int)floor(14/4);
			printf("%d\n",b);
			printf("%d\n",4*b);
			printf("%d",14-4*b);
			break;
		case 4:
			c = (double)500.0/3;
			printf("%.3f",c);
			break;
		case 5:
			printf("%d",480/32);
			break;
		case 6:
			printf("%.4lf",sqrt(6*6+9*9));
			break;
		case 7:
			printf("%d\n",100+10);
			printf("%d\n",100+10-20);
			printf("%d",0);
			break;
		case 8:
			printf("%.4lf\n",PI*2*5);
			printf("%.4lf\n",PI*5*5);
			printf("%.3lf",(4.0/3)*PI*pow(5,3));
			break;
		case 9:
			for(t=4;t>1;t--)
			{
				n = (n+1)*2;
			}
			printf("%d",n);
			break;
		case 10:
			printf("%d",90/10);
			break;
		case 11:
			m = 100.0/3.0;
			printf("%.4lf",m);
			break;
		case 12:
			d = 'M'-'A'+1;
			printf("%d\n",d);
			s = 'A'+17;
			printf("%c",s);
			break;
		case 13:
			v = ((4.0/3)*PI*pow(4,3))+((4.0/3)*PI*pow(10,3));
			e = pow(v,1./3);
			printf("%d",e);
			break;
		case 14:
			x = sqrt(100*100-4*2400);
			x1 = (100+x)/2;
			x2 = (100-x)/2;
			if(x1<x2)
			{
				printf("%d",110-x2);
			}
			else
			{
				printf("%d",110-x1);
			}
			break;
		default:
			//TODO
			break;
	}
	
	return 0;
}




//#include<stdio.h>
//#include<math.h>
//
//int main() {
//    int T;
//	scanf("%d", &T);
//    if (T == 1) {
//		printf("I love Luogu!");
//    } else if (T == 2) {
//		int a, b;
//		a = 2 + 4;
//		b = 10 - a;
//		printf("%d %d", a, b);
//    } else if (T == 3) {
//        int a, b, c;
//        a = 14 / 4;
//        b = a * 4;
//        c = 14 - b;
//        printf("%d\n%d\n%d", a, b, c);
//    } else if (T == 4) {
//        double a;
//        a = (double)500 / 3;
//        printf("%.3f", a);
//    } else if (T == 5) {
//        int a;
//        a = (260 + 220) / (12 + 20);
//        printf("%d", a);
//    } else if (T == 6) {
//        printf("%.4lf", sqrt(117.0));
//    } else if (T == 7) {
//        int a, b, c;
//        a = 100 + 10;
//        b = a - 20;
//        c = 0;
//        printf("%d\n%d\n%d", a, b, c);
//    } else if (T == 8) {
//        double r, pi;
//        r = 5;
//        pi = 3.141593;
//        printf("%.4lf\n%.4lf\n%.3lf", 2.0 * pi * r, pi * r* r, 4.0 * pi * r * r * r / 3.0);
//    } else if (T == 9) {
//        printf("%d", 22);
//    } else if (T == 10) {
//        printf("%d", 9);
//    } else if (T == 11) {
//        printf("%.4lf", 100.0 / 3.0);
//    } else if (T == 12) {
//        char a, b, d;
//        int c;
//        a = 'A';
//        b = 'M';
//        c =  b - a + 1;
//        d = a + 17;
//        printf("%d\n%c\n", c, d);
//    } else if (T == 13) {
//        double pi, sum;
//        int ans;
//        pi = 3.141593;
//        sum = 4.0 * pi * 1064.0 / 3.0;
//        ans = pow(sum, 1.0/3.0);
//        printf("%d", ans);
//    } else if (T == 14) {
//        double a, b, c;
//        int d;
//        a = sqrt(120 * 120 - 4 * 3500);
//        b = (120 + a) / 2;
//        c = (120 - a) / 2;
//        d = fmin(b, c);
//		printf("%d", d);
//    }
//    return 0;
//}
