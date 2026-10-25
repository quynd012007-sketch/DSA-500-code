# Tìm phần tử lặp lại trong mảng (chỉ có 1 phần tử lặp lại)
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán
input: 
- Mảng có 1 phần tử lặp lại
output:
- In ra phần tử lặp lại
2. Giải thuật
Thư viện sử dụng: <stdio.h>
B1:
- Nhập mảng có 1 phần tử lặp lại a[n]
B2:
- Tạo hàm finDuplicateElement(int a[], int n)
- Chạy 2 vòng lặp for để so sánh từng cặp phần tử đến khi nào thấy có cặp phần tử bằng nhau thì dừng lại và in ra
1. Test case
input:
5
1 2 3 4 2
output:
Duplicate element is: 2

