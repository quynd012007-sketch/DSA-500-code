# Chuyển các phần tử 0 về cuối mảng
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán 
input:
- Mảng số nguyên a[n]
output:
- Mảng có các phần tử 0 được chuyển vê cuối mảng
2. Giải thuật 
Thư viện sử dụng: <stdio.h>
B1:
- Nhập mảng a[n]
B2:
- Tạo hàm moveAllzero(int a[], int n)
- Cho biến l=0,r=n-1 (l chạy từ đầu mảng và r chạy từ cuối mảng)
+ Sử dụng while(l<=r)
- Sử dụng thềm 2 vòng lặp while ở bên trong 
- Vòng lặp thứ nhất để chạy biến l nếu a[l] khác 0 thì chạy tiếp còn =0 thì dừng lại
- Vòng lặp thứ 2 để chạy biển r nếu a[r]=0 thì chạy tiếp còn khác 0 thì dừng lại
- Khi cả 2 dừng lại thì đổi chỗ vị trí
-> Tiếp tục như thế ta sẽ thu được mảng có các số 0 được di chuyển đến cuối mảng
- In ra mảng
3. Test case 
input:
9
6 0 8 2 3 0 4 0 1
output:
6 1 8 2 3 4 0 0 0 