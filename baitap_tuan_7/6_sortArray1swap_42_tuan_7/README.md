# Sắp xếp mảng có 2 phần tử sai vị trí
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán
input:
- Mảng có 2 phần tử sai vị trí
output:
- Mảng đã được đổi vị trí 2 phần tử
2. Giải thuật 
Thư viện sử dụng: <stdio.h>
B1:
- Nhập mảng a[n]
B2:
- Tạo hàm sortArray1swap(int a[], int n)
- Tạo 2 biến p,q để cho 2 chỉ số của 2 phần tử bị sai
- for xét xem có a[i]>a[i+1] không
- nếu có với i đầu tiên gán cho p=i
- i thứ 2 gắn cho p=i+1
- đổi 2 phần tử
- In ra mảng đã sắp xếp
3. Test case
input:
6
3 8 6 7 5 9
ouput:
3 5 6 7 8 9 