// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

void thongTinThuCung()
{
	
		char ma[50], ten[50];
		int namSinh;

		getchar();

		printf("Moi nhap ma thu cung: ");
		gets_s(ma, sizeof(ma));

		printf("Moi nhap ten thu cung: ");
		gets_s(ten, sizeof(ten));

		printf("Moi nhap nam sinh thu cung: ");
		scanf("%d", &namSinh);
		int tuoi = 2025 - namSinh;
		printf("\n--- THONG TIN THU CUNG ---\n");
		printf("Ma thu cung: %s\n", ma);
		printf("Ten thu cung: %s\n", ten);
		printf("Nam sinh thu cung: %d\n",namSinh);
		printf("Tuoi  : %d\n", tuoi);
	


}
void tinhTong()
{
	int n;
	do {
		printf("Nhap so nguyen duong n (n > 3): ");
		scanf("%d", &n);
	} while (n <= 3);
	int tong = 0;
	for (int i = 1; i <= n; i += 2) 
	{
		tong += i;
	}
	printf("\nTong cac so le tu 1 den %d la: %d\n", n, tong);
	if (n % 5 == 0)
	{
		printf("So %d chia het cho 5.\n", n);
	}
	else 
	{
		printf("So %d KHONG chia het cho 5.\n", n);
	}
}
void thongTinCuaHang()
{

}
int main()
{
	int tiepTuc;
	int luachon;
	do
	{
		

		printf("Menu");
		printf("Moi chon CN\n");
		printf("1.Thong tin thu cung:\n");
		printf("2.Tinh tong :\n");
		printf("3.Thong tin cua hang:\n");
		printf("0.thoat\n");
		printf("Moi chon CN [1-3]:");
		scanf("%d", &luachon);
		switch (luachon)
		{
		case 1:thongTinThuCung();
			break;
		case 2:tinhTong();
			break;
		case 3:thongTinCuaHang();
			break;
		case 0:
			printf("Thoat");
			printf("\n");
			break;

		default:
			printf("Hay chon CN tren Menu [1-4]");
			printf("\n");
			break;

		}
	} while (luachon != 0);
	printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
	scanf("%d", &tiepTuc);
	system("cls");
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