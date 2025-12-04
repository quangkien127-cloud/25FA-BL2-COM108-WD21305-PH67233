// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
void kiemTraSoNguyen()
{
	int tiepTuc = 1;
	int x;

	printf("Nhap vao 1 so nguyen x: ");
	scanf("%d", &x);

	printf("=> %d la so nguyen.\n", x);
	int isPrime = 1;

	if (x < 2) {
		isPrime = 0;
	}
	else {
		for (int i = 2; i <= sqrt(x); i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}
	}

	if (isPrime)
		printf("=> %d la so nguyen to.\n", x);
	else
		printf("=> %d KHONG la so nguyen to.\n", x);

	
	int can = sqrt(x);
	if (can * can == x)
		printf("=> %d la so chinh phuong.\n", x);
	else
		printf("=> %d KHONG la so chinh phuong.\n", x);


	printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
	scanf("%d", &tiepTuc);
	system("cls");
}
void uocChungBoiChung2So()
{
	int x, y;
	printf("Nhap so thu nhat: ");
	scanf("%d", &x);
	printf("Nhap so thu hai: ");
	scanf("%d", &y);

	
	int a = x, b = y;
	while (b != 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}
	int gcd = a;

	
	int lcm = (x * y) / gcd;

	printf("Uoc so chung lon nhat (GCD) cua %d va %d la: %d\n", x, y, gcd);
	printf("Boi so chung nho nhat (LCM) cua %d va %d la: %d\n", x, y, lcm);
}

void tinhTienKaraoke()
{
	int tiepTuc = 1;
	int start, end;
	printf("Nhap gio bat dau (12-23): ");
	scanf("%d", &start);
	printf("Nhap gio ket thuc (12-23): ");
	scanf("%d", &end);

	if (start < 12 || end > 23 || start >= end) 
	{
		printf("Gio khong hop le!\n");
		return;
	}

	int gio = end - start;
	int gia = 0;

	if (gio <= 3) gia = gio * 150000;
	else gia = 3 * 150000 + (gio - 3) * (150000 * 0.7);

	if (start >= 14 && start <= 17)
		gia *= 0.9;

	printf("Tien karaoke = %d VND\n", gia);
	printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
	scanf("%d", &tiepTuc);
	system("cls");
}
void tinhTienDien()
{
	int tiepTuc = 1;
	int kwh;
	printf("Nhap so kWh: ");
	scanf("%d", &kwh);

	int money = 0;

	if (kwh <= 50) money = kwh * 1678;
	else if (kwh <= 100) money = 50 * 1678 + (kwh - 50) * 1734;
	else if (kwh <= 200) money = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
	else if (kwh <= 300) money = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
	else if (kwh <= 400) money = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
	else money = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;

	printf("Tien dien phai tra = %d VND\n", money);
	printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
	scanf("%d", &tiepTuc);
	system("cls");
}
void doiTien()
{
	int money;
	printf("Nhap so tien can doi: ");
	scanf("%d", &money);

	int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int soTo;

	printf("\nKet qua doi tien:\n");

	for (int i = 0; i < 9; i++)
	{
		soTo = money / menhGia[i];
		if (soTo > 0)
		{
			printf("%d to %d\n", soTo, menhGia[i]);
			money %= menhGia[i];
		}
	}

	printf("\n");
	system("pause");
	system("cls");
}
void tinhLaiVay() {
	long tienVay;
	printf("Nhap so tien muon vay: ");
	scanf("%ld", &tienVay);

	float laiSuat = 0.05;          // 5%/thang
	int kyHan = 12;               // 12 thang
	long gocPhaiTra = tienVay / kyHan;
	long tienConLai = tienVay;

	printf("\n%-8s %-15s %-15s %-15s %-15s\n",
		"Ky han", "Lai phai tra", "Goc phai tra"
		, "Tong phai tra", "Con lai");

	for (int i = 1; i <= kyHan; i++) {
		long laiPhaiTra = tienConLai * laiSuat;
		long tongPhaiTra = gocPhaiTra + laiPhaiTra;

		printf("%-8d %-15ld %-15ld %-15ld %-15ld\n",
			i, laiPhaiTra, gocPhaiTra, tongPhaiTra, tienConLai - gocPhaiTra);

		tienConLai -= gocPhaiTra;
	}
}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungBoiChung2So();
			break;
		case 3:
			tinhTienKaraoke();
			break;
		
		case 4:
			tinhTienDien();
			break;
		case 5:
			doiTien();
			break;
		case 6:
			tinhLaiVay();
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-6]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}

}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Uoc Chung Boi Chung 2 So");
		printf("\n");
		printf("3.  Tinh Tien Karaoke");
		printf("\n");
		printf("4. Tinh Tien Dien");
		printf("\n");
		printf("5. Doi Tien ");
		printf("\n");
		printf("6. Tinh Lai Vay ");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-6]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);

	} while (chonChucNang != 0);
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184