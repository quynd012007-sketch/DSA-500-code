# Thuật toán Merge Sort sắp xếp mảng 1 chiều
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán
input:
- Mảng chưa được sắp xếp
output:
- In ra mảng sau từng lần sắp xếp của Merge Sort
2. Giải thuật 
+ Thư viện sử dụng: stdio.h
+ B1: Khai báo n, tiến hành nhập mảng a[n]
+ B2: 
Tạo hàm tronMang(int a[], int left, int mid, int right) để trộn hai mảng đã sắp xếp liên tiếp với nhau bằng cách chèn các phần tử của mảng sau vào đúng vị trí với mảng trước
+ B3:
Tạo hàm chiaMang(int a[], int left, int right, int n)
để chia mảng thành các mảng nhỏ cho đến khi còn 1 phần tử mỗi mảng thì coi như đã sắp xếp (bằng hàm đệ quy). Sau đó gọi ra hàm tronMang để trộn lần lượt các mảng đã sắp xếp .Trong hàm chia mảng thì in ra mảng sắp xếp tại bước đó (biến n trong hàm này chỉ để in ra hàm đã sắp xếp sau từng bước của thuật toán)
+ B4: Tạo hàm mergeSort(int a[], int n);
Là hàm giao diện bên trong nó nếu hàm có 1 phần tử thì coi như đã được sắp xếp.
Nếu không thì gọi hàm chiaMang để thực hiện trộn và sắp xếp.
3. Test case
Input:
13
101 23 57 13 25 121 87 36 13 204 111 89 59
Output:
23 101 57 13 25 121 87 36 13 204 111 89 59 
23 101 13 57 25 121 87 36 13 204 111 89 59 
13 23 57 101 25 121 87 36 13 204 111 89 59 
13 23 57 101 25 121 87 36 13 204 111 89 59 
13 23 57 101 25 87 121 36 13 204 111 89 59 
13 23 25 57 87 101 121 36 13 204 111 89 59 
13 23 25 57 87 101 121 13 36 204 111 89 59 
13 23 25 57 87 101 121 13 36 204 111 89 59 
13 23 25 57 87 101 121 13 36 204 89 111 59 
13 23 25 57 87 101 121 13 36 204 59 89 111 
13 23 25 57 87 101 121 13 36 59 89 111 204 
13 13 23 25 36 57 59 87 89 101 111 121 204 