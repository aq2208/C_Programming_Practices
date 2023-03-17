#include <stdio.h>
#include <math.h>

void doiSangNhiPhan(int n) {
	char du[100];
	int count = 0; // dem so luong so du
	// dung vong while 
	while (n > 0) {
		int x = n % 2; // n chia 2 -> luu so du vao x.
		if (x == 1) {
			du[count] = '1';
		} else {
			du[count] = '0';
		}
		count++;
		// chia n cho 2
		n = n / 2;
	}
	int i;
	for (i = count - 1; i >= 0;i--) {
		printf("%c", du[i]);
	}
}

float numerals(float a1, float b1){
		printf("\nInput two numbers: ");
		scanf("%f%f", &a1,&b1);
		float sum = a1+b1;
		printf("\nSum = %.3f",sum );
		float sub = a1-b1;
		printf("\nSubtraction = %.3f", sub);
		float product = a1*b1;
		printf("\nProduction = %.3f", product);
		float divide = a1/b1;
		printf("\nDivision = %.3f", divide); 
}
	
float Geometry(float a, float b, float x, float y, float z, float m, float n, float h1, float r ){
	//hinh chu nhat
	printf("\nInput the sides of a rectangle: ");
	scanf("%f%f", &a, &b);
	float PHCN = (a+b)*2;
	float SHCN = a*b;
	printf("\nRectangle's Perimeter = %.3f", PHCN);
	printf("\nRectangle's Area = %.3f", SHCN);
	//hinh tam giac
	printf("\n\nInput the sides of a triange: ");
	scanf("%f%f%f", x, y, z);
	float p = (x+y+z)/2;
	printf("\nTriangle's Perimeter = %.3f", x+y+z);
	printf("\nTriangle's Area = %.3f", sqrt(p*(p-x)*(p-y)*(p-z)));
	//hinh binh hanh
	printf("\n\nInput the bottom size, next-to size and the height of a parallelogram: ");
	scanf("%f%f%f", m, n, h1);
	printf("\nParallelogram's Perimeter = %.3f", 2*(m+n));
	printf("\nParallelogram's Area = %.3f",h1*m );
	//hinh tron
	printf("\n\nInput the radius of a circle: ");
	scanf("%f", &r);
	printf("\nCircle's Perimeter = %.3f", 2*r*M_PI);
	printf("\nCircle's Area = %.3f", r*r*M_PI);
}
	
float Information(int x){
	printf("\n\nInput a number in decimal: ");
	scanf("%d", &x);
	//decimal to binary
	doiSangNhiPhan(x);
	//decimal to hexadecimal
	printf("\nThat number in Hexadecimal = %04x",x);
	//decimal to octal
	printf("\nThat number in Octal = %04o",x);
}

int main(){
	int selection; 
	float a1, b1;
	float a,b,x,y,z,m,n,h1,r;
	int x;
	printf("\n*******************************************");
	printf("\n*      Date        :                      *");
	printf("\n*      Student Name:                      *");
	printf("\n*      Student ID  :                      *");
	printf("\n*******************************************");
	printf("\n\n*****************************************");
	Nhap:
	printf("\n*  Please select the number for the appropriate tasks *");
	printf("\n*      [1]. NUMERALS               *");
	printf("\n*      [2]. GEOMETRY               *");
	printf("\n*      [3]. INFORMATION            *");
	printf("\n*      [4]. EXIT                   *");
	printf("\n**************************************");
	scanf("%d", &selection);
	switch(selection){
		case 1: 
			numerals(a1,b1);
			break;
		case 2: 
			Geometry(a,b,x,y,z,m,n,h1,r);
			break;
		case 3: 
			Information(x);
			break;
		case 4: 
			return 0;
			break;
		default: 
			printf("Invalid number, please try again");
			goto Nhap;
	}
}