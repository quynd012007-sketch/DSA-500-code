# Tìm mảng con số nguyên không có phần tử trùng lớn nhất 
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1. Mô tả bài toán
input:
- Mảng số nguyên a[n]
ouput:
- Mảng con số nguyên lớn nhất không có phần tử trùng lớn nhất
2. Giải thuật
Thư viện sử dụng: <stdio.h>
B1:
- Nhập mảng a[n]
B2:
- Tạo hàm findLargestSubarray(int a[], int n)
- Thiết lập maxLength, left, right, start =0(start là phần tử bắt đầu của mảng con)
- Sử dụng vòng lặp while với điều kiện n-start> maxLength (Tức là đến khi vẫn có thể tìm được mảng con lớn nhất không có phần tử trùng)
B3:
- Trong vòng lặp while thêm vòng lặp for để chạy phần tử cuối của mảng con bắt đầu từ start+1
- Dùng thêm vòng lặp for để so sánh phần tử cuối với các phần tử trước đó bắt đầu từ start
- Nếu khác nhau phần tử cuối chạy tiếp
- Nếu bằng nhau 
+ So sánh j-i (độ dài mảng con) với maxLength nếu lớn hơn thì gán và gán phần tử với left right
+ đặt start bắt đầu từ i+1(Mảng con chạy tiếp từ phần tử chứa 1 phần tử trùng đã tìm thấy)
- Sử dụng biến foundDuplicate để check xem vòng for thứ 2 chạy hết đến i hay chạy đến khi a[i]=a[j]
- Nếu foundDuplicate=1 thì thoát vòng lặp 1
- Nếu foundDuplicate=0 thì tức là đã chạy hết đến n thì 
+ Xét xem n-start > maxLength không thì đổi
+ break
-> In ra mảng con đã tìm được
3. Test case
input:
8
2 0 2 1 4 3 1 0
output:
The largest subarray is 0 2 1 4 3 