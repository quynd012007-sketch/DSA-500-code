# Tìm mảng con liên tiếp có tổng các phần tử bằng 0
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán 
input:
- Mảng số nguyên a[n]
output:
- Các mảng con liên tiếp có tổng bằng 0
2. Giải thuật 
B1:
- Nhập mảng a[n]
B2:
- Tạo hàm printSubarray0sum ( int a[], int n)
- Tạo tổng sum[n] với sum[i] là tổng của các phần tử từ a[0] đến a[i]
B3:
- So sánh từng tổng sum[i] với sum[j]( j < i) 
- Nếu bằng nhau thì in ra tổng bằng 0 từ a[j+1] đến a[i]
B4:
- Xét thêm trường hợp tổng của cả mảng đều bằng 0
3. Test case
input:
10
3 4 -7 3 1 3 1 -4 -2 -2
output:
Subarrays with zero-sum are:
4 -7 3 
-7 3 1 3 
3 1 -4 
3 1 3 1 -4 -2 -2 
3 4 -7 3 1 3 1 -4 -2 -2 