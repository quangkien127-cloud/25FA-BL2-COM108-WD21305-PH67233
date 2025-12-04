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
void xepLoai(float d, char* xl) 
{
	if (d >= 9.0)
		strcpy(xl, "Xuat sac");
	else if (d >= 8.0)
		strcpy(xl, "Gioi");
	else if (d >= 6.5)
		strcpy(xl, "Kha");
	else if (d >= 5.0)
		strcpy(xl, "Trung binh");
	else
		strcpy(xl, "Yeu");
}
void vayTienMuaXe()
{
	float phanTram;
	printf("Nhap phan tram vay toi da (vd: 80): ");
	scanf("%f", &phanTram);

	long giaTriXe = 500000000;      // 500 triệu
	float laiThang = 0.072 / 12;    // 7.2%/năm
	int soThang = 24 * 12;          // 24 năm = 288 tháng

	// Tính tiền vay
	float tienVay = giaTriXe * (phanTram / 100.0);
	float traTruoc = giaTriXe - tienVay;

	
	float A; // số tiền trả hàng tháng
	A = tienVay * laiThang * pow(1 + laiThang, soThang) /
		(pow(1 + laiThang, soThang) - 1);

	printf("\n KET QUA VAY MUA XE \n");
	printf("Gia tri xe: %ld VND\n", giaTriXe);
	printf("Phan tram vay: %.1f%%\n", phanTram);
	printf("Tien tra truoc: %.0f VND\n", traTruoc);
	printf("Tien vay: %.0f VND\n", tienVay);
	printf("So tien phai tra moi thang: %.0f VND\n", A);
}
void sapXepSinhVien() 
{
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	fflush(stdin);

	char sv[1][3][50]; // 0: ten, 1: diem, 2: hoc luc

	// ===== Nhập thông tin =====
	for (int i = 0; i < n; i++) {
		printf("\nNhap ten sinh vien %d: ", i + 1);
		fgets(sv[i][0], 50, stdin);

		// Xóa xuống dòng
		size_t len = strlen(sv[i][0]);
		if (sv[i][0][len - 1] == '\n')
			sv[i][0][len - 1] = '\0';

		float diem;
		printf("Nhap diem: ");
		scanf("%f", &diem);
		fflush(stdin);

		// Lưu điểm dạng chuỗi
		sprintf(sv[i][1], "%.2f", diem);

		// Lưu học lực
		xepLoai(diem, sv[i][2]);
	}

	// Sắp xếp giảm dần theo điểm
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (atof(sv[i][1]) < atof(sv[j][1])) {  // so sánh điểm dạng float
				char temp[50];

				// Đổi tên
				strcpy(temp, sv[i][0]);
				strcpy(sv[i][0], sv[j][0]);
				strcpy(sv[j][0], temp);

				// Đổi điểm
				strcpy(temp, sv[i][1]);
				strcpy(sv[i][1], sv[j][1]);
				strcpy(sv[j][1], temp);

				// Đổi học lực
				strcpy(temp, sv[i][2]);
				strcpy(sv[i][2], sv[j][2]);
				strcpy(sv[j][2], temp);
			}
		}
	}

	
	printf("\n DANH SACH SAP XEP THEO DIEM GIAM DAN \n");
	for (int i = 0; i < n; i++) {
		printf("Ten: %-20s | Diem: %-5s | Hoc luc: %s\n",
			sv[i][0], sv[i][1], sv[i][2]);
	}
}
void gameFPOLY_LOTT()
{
	int a, b;
	int r1, r2;
	int dem = 0;

	printf("Nhap 2 so tu 1 - 15: ");
	scanf("%d %d", &a, &b);

	if (a < 1 || a > 15 || b < 1 || b > 15) {
		printf("So nhap khong hop le!\n");
		return;
	}

	srand(time(NULL));
	r1 = rand() % 15 + 1;
	do {
		r2 = rand() % 15 + 1;
	} while (r2 == r1);

	printf("He thong quay duoc: %02d %02d\n", r1, r2);

	if (a == r1 || a == r2) dem++;
	if (b == r1 || b == r2) dem++;

	if (dem == 0)
		printf("Chuc ban may man lan sau\n");
	else if (dem == 1)
		printf("Chuc mung ban da trung giai nhi!\n");
	else
		printf("Chuc mung ban da trung giai nhat!!!\n");
}
void tinhPhanSo()
{
	int tu1, mau1, tu2, mau2;
	int tong_tu, tong_mau;
	int hieu_tu, hieu_mau;
	int tich_tu, tich_mau;
	int thuong_tu, thuong_mau;

	// Nhập 2 phân số
	printf("Nhap tu so va mau so cua phan so 1: ");
	scanf("%d %d", &tu1, &mau1);

	printf("Nhap tu so va mau so cua phan so 2: ");
	scanf("%d %d", &tu2, &mau2);

	// Kiểm tra mẫu số
	if (mau1 == 0 || mau2 == 0) {
		printf("Mau so khong duoc bang 0!");
		return 0;
	}

	// Tính tổng
	tong_tu = tu1 * mau2 + tu2 * mau1;
	tong_mau = mau1 * mau2;

	// Tính hiệu
	hieu_tu = tu1 * mau2 - tu2 * mau1;
	hieu_mau = mau1 * mau2;

	// Tích
	tich_tu = tu1 * tu2;
	tich_mau = mau1 * mau2;

	// Thương
	thuong_tu = tu1 * mau2;
	thuong_mau = mau1 * tu2;

	// Xuất kết quả
	printf("\nTong = %d/%d", tong_tu, tong_mau);
	printf("\nHieu = %d/%d", hieu_tu, hieu_mau);
	printf("\nTich = %d/%d", tich_tu, tich_mau);
	printf("\nThuong = %d/%d", thuong_tu, thuong_mau);
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
		case 7:
			vayTienMuaXe();
			break;
		case 8:
			sapXepSinhVien();
			break;
		case 9:
			gameFPOLY_LOTT();
			break;
		case 10:
			tinhPhanSo();
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
		printf("3. Tinh Tien Karaoke");
		printf("\n");
		printf("4. Tinh Tien Dien");
		printf("\n");
		printf("5. Doi Tien ");
		printf("\n");
		printf("6. Tinh Lai Vay ");
		printf("\n");
		printf("7. vayTienMuaXe ");
		printf("\n");
		printf("8. sapXepSinhVien ");
		printf("\n");
		printf("9. gameFPOLY_LOTT");
		printf("\n");
		printf("10. Tinh phan so ");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-10]: ");
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