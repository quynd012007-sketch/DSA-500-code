# Sắp xếp mảng 0,1,2 Theo thứ tự tăng dần (Cờ 3 màu Dutch)
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán
input:
- Mảng gồm 3 giá trị 0,1,2 chưa sắp xếp
output:
- Mảng đã sắp xếp theo thứ tự 0,1,2
2. Giải thuật
Thư viện sử dụng: <stdio.h>
B1:
- Nhập mảng 0,1,2 chưa sắp xếp a[n]
B2:
- Tạo hàm miniQuick(int a[], int l, int pivot, int r)
Với l là đầu mút trái pivot là phần tử so sánh và r là đầu mút phải
- Hàm này trả về r (do dùng điều kiện dừng là khi l>r)
- Sử dụng vòng lặp while (l<=r)
Trong đó sử dụng 2 vòng lặp while để kiểm tra xem a[l]<= pivot và a[r]>pivot
khi cả 2 đều dừng nghĩa là 2 điều kiện đều sai nên ta sẽ đổi chỗ 2 vị trí và tiếp tục chạy 
l++ và r--
B3:
- Tạo hàm DutchFlag(int a[],int n)
- Trong đây gọi 2 hàm miniQuick
int right = miniQuick(a,0,1,n-1); \\Sắp xếp 0,1 về 1 phía và 2 về 1 phía
 miniQuick(a,0,0,right);  \\Sắp xếp mảng 0,1
 Sau đó in ra mảng đã sắp xếp
 3. Test case
 - input:
 12
 0 1 2 2 1 0 0 2 0 1 1 0
 - output:
 0 0 0 0 0 1 1 1 1 2 2 2 