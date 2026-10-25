# Sắp xếp mảng trở thành xen kẽ high-low (với phần tử đầu là low)
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán 
input:
- Mảng số nguyên a[n]
output:
- Mảng sắp xếp theo kiểu low-high-low-...etc
2. Giải thuật 
Thư viện sử dụng: <stdio.h>
B1:
- Nhập mảng a[n]
B2:
- Tạo hàm sortMax3(int a[],int l)(Với l ở đây là phần tử bên trái của 3 phần tử)
- Tìm max và index của max bằng vòng lặp for cho 3 phần tử bắt đầu từ l
- Nếu index của max khác l+1 thì đổi max với a[l+1]
B3:
- Tạo hàm rearrangeArray(int a[], int n)
- Dùng vòng lặp for chạy l trong for sẽ gọi hàm sortMax3 để sắp xếp 3 phần tử liền nhau
- In ra mảng đã sắp xếp
3. Test case
input:
5
9 6 8 3 7
output:
6 9 3 8 7
