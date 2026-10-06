# Thuật toán Selection Sort để sắp xếp mảng 1 chiều
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
Ngôn ngữ: C
1. Mô tả bài toán
input: 
- Mảng chưa được sắp xếp
output:
- In ra mảng trong từng bước của thuật toán Selection Sort
2. Giải thuật
+ Thư viện sử dụng: stdio.h
- B1: Khai báo n và mảng a[n], Tiến hành nhập mảng
- B2: Tạo hàm selectionSort(int a[],int n)
Duyệt từng phần tử của mảng ở đây đặt chỉ số minIndex (chỉ số của phần tử nhỏ nhất) là chỉ số phần tử bắt đầu duyệt i
Duyệt tiếp các phần tử ngay sau i là từ j=i+1
Sau đó so sánh Nếu a[minIdex]>a[j] thì gán minIdex=j
Sau khi duyệt hết lượt của j thì đổi giá trị của a[i] với a[minIndex]
Duyệt để in ra các phần tử của thuật toán sau 1 bước
3. Test case
input 61 23 57 13 25 121 87 36 13 204 111 89 59 
output
61 23 57 13 25 121 87 36 13 204 111 89 59 
13 23 57 61 25 121 87 36 13 204 111 89 59 
13 13 57 61 25 121 87 36 23 204 111 89 59 
13 13 23 61 25 121 87 36 57 204 111 89 59 
13 13 23 25 61 121 87 36 57 204 111 89 59 
13 13 23 25 36 121 87 61 57 204 111 89 59 
13 13 23 25 36 57 87 61 121 204 111 89 59 
13 13 23 25 36 57 59 61 121 204 111 89 87 
13 13 23 25 36 57 59 61 121 204 111 89 87 
13 13 23 25 36 57 59 61 87 204 111 89 121 
13 13 23 25 36 57 59 61 87 89 111 204 121 
13 13 23 25 36 57 59 61 87 89 111 204 121 
13 13 23 25 36 57 59 61 87 89 111 121 204 