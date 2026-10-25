# Sắp xếp mảng Binary(0,1) tăng dần
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán
input:
- Mảng gồm 2 giá trị 0,1 chưa sắp xếp
output:
- Mảng đã sắp xếp theo thứ tự 0,1
2. Giải thuật
Thư viện sử dụng: <stdio.h>
B1:
- Nhập mảng 0,1 chưa sắp xếp a[n]
B2:
- Tạo hàm miniQuick(int a[], int l, int pivot, int r)
Với l là đầu mút trái pivot là phần tử so sánh và r là đầu mút phải
- Hàm này trả về r (do dùng điều kiện dừng là khi l>r)
- Sử dụng vòng lặp while (l<=r)
Trong đó sử dụng 2 vòng lặp while để kiểm tra xem a[l]<= pivot và a[r]>pivot
khi cả 2 đều dừng nghĩa là 2 điều kiện đều sai nên ta sẽ đổi chỗ 2 vị trí và tiếp tục chạy 
l++ và r--
B3:
- Tạo hàm sortBinary(int a[],int n)
- Trong đây gọi 1 hàm miniQuick
int right = miniQuick(a,0,0,n-1); \\Sắp xếp 0 và 1 về 2 đầu
 Sau đó in ra mảng đã sắp xếp
 3. Test case
 - input:
 8
 1 0 0 1 0 1 0 0
 - output:
 0 0 0 0 0 1 1 1
