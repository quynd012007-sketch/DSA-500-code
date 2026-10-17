# Thuật toán Quick Sort sắp xếp mảng 1 chiều
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán
input:
- Mảng chưa được sắp xếp
output:
- In ra mảng sau từng lần sắp xếp của Quick Sort
2. Giải thuật 
+ Thư viện sử dụng: stdio.h
+ B1: Khai báo n, tiến hành nhập mảng a[n]
+ B2: Tạo Hàm phân đoạn phanDoan(int a[],int left,int right,int pivot, int n)(Giá trị n ở đây chỉ để in mảng cho từng lần sắp xếp)
- Tạo 2 biến chạy i,j bắt đầu từ 2 đầu trái phải với (bên trái nhỏ hơn pivot và bên phải lớn hơn pivot)*, Mỗi khi đúng với * thì i++ và j-- còn khi cả 2 cùng sai(dừng lại) thì sẽ đổi chỗ nếu i < j sau khi thoát vòng lặp ta sẽ đổi vị trí của pivot cho a[j] nếu pivot >a[j] lúc này Ta sẽ có mảng a[] Với pivot đặt đúng vị trí và mảng bên trái nhỏ hơn pivot , mảng bên phải lớn hơn pivot.
- Tạo vòng lặp for in mảng
- Hàm này trả về vị trí của pivot sau khi đứng đúng vị trí
+ B3: Tạo hàm sắp xếp quickSort(int a[], int left, int right, int n)(Giá trị n ở đây cũng chỉ để in mảng cho từng lấn sắp xêp)
- đặt pivot = a[left]
- gọi lại hàm quickSort cho mảng bên trái và mảng bên phải(Hàm tổng quát)
Hàm cơ sở khi mà left= right không cần làm gì chỉ cần thoát hàm nên không cần return
3. Test case
intput:
13
101 23 57 13 25 121 87 36 13 204 111 89 59
output:
89 23 57 13 25 59 87 36 13 101 111 204 121 
13 23 57 13 25 59 87 36 89 101 111 204 121 
13 23 57 13 25 59 87 36 89 101 111 204 121 
13 13 23 57 25 59 87 36 89 101 111 204 121 
13 13 23 36 25 57 87 59 89 101 111 204 121 
13 13 23 25 36 57 87 59 89 101 111 204 121 
13 13 23 25 36 57 59 87 89 101 111 204 121 
13 13 23 25 36 57 59 87 89 101 111 204 121 
13 13 23 25 36 57 59 87 89 101 111 121 204 

