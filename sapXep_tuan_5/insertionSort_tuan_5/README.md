# Thuật toán Insertion Sort để sắp xếp mảng 1 chiều
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
Ngôn ngữ: C
1. Mô tả bài toán
input: 
- Mảng chưa được sắp xếp
output:
- In ra mảng trong từng bước của thuật toán Insertion Sort
2. Giải thuật
+ Thư viện sử dụng: stdio.h
- B1: Khai báo n và mảng a[n], Tiến hành nhập mảng
- B2: Tạo hàm insertiomSort(int a[], int n)
Duyệt phần tử theo chỉ số i bằng vòng for
Chọn phần tử so sánh key=a[i]
Duyệt phần tử theo while với điều kiện j>=0 (j=i-1) và a[j]>key thì đổi chỗ và đến khi nào key <= a[j] thì dừng luôn do mảng phía đầu đã được sắp xếp
In ra mảng sau mỗi bước của thuật toán
3. Test case
input 32 51 27 83 66 11 45 75
output
32 51 27 83 66 11 45 75 
32 51 27 83 66 11 45 75 
27 32 51 83 66 11 45 75 
27 32 51 83 66 11 45 75 
27 32 51 66 83 11 45 75 
11 27 32 51 66 83 45 75 
11 27 32 45 51 66 83 75 
11 27 32 45 51 66 75 83 