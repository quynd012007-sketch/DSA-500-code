# Tìm cặp phần tử có tích lớn nhất trong mảng
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán 
input:
- Mảng số nguyên a[n]
output:
- Các cặp số có tích lớn nhất
2. Giải thuật 
Thư viện sử dụng: <stdio.h>
B1:
- Nhập mảng a[n]
B2:
+ Nhận xét: Tích lớn nhất thì chỉ có thể từ 2 phần tử lớn nhất hoặc 2 phần tử nhỏ nhất
- Tạo hàm maximumProduct (int a[], int n)
- Đặt min1,min2, max1,max2 là các giá trị nhỏ(lớn) thứ nhất và thứ 2
- Duyệt vòng for từ 2 đến hết 
- Nếu a[i] nhỏ hơn hay lớn hơn cái nào thì gán rồi sau đó chia thành 3 TH:
- tích 2 min là MAX
- tích 2 max là MAX
- tích 2 cái bằng nhau
In ra các cặp
3. Test case
input:
5
-10 -3 5 6 -2
output:
Pair has Maximum product is: (-10, -3) or (6, 5)