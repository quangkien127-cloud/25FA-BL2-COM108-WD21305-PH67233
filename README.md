# 25FA-BL2-COM108-WD21305-PH67233
#include <stdio.h>
main(){

int n;
printf("Nhap so nguyen:");
scanf("%d",&n);
int mang[n];
for(int i = 0;i < n;i++){
	printf("Nhap phan tu thu %d:",i+1);
	scanf("%d",&mang[i]);
	}
	float tong =0;
	float tb;
	int dem =0;
	for(int i = 0;i < n;i++){
		if(mang[i] % 3 == 0){
			tong += mang[i];
			dem++;
		}

	}

}