# Tìm cặp phần tử trong mảng có tổng bằng số cho trước
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
1, Mô tả bài toán
Input:
- Mảng gồm các số nguyên
- Tổng cho trước target
Output:
- Các cặp số có tổng bằng target
+ Lưu ý: Mỗi cặp số in ra đều khác nhau.
2, Giải thuật
+ Thư viện sử dụng: <stdio.h>
B1: 
- Nhập mảng cho trước nums[n], và tổng target
B2:
- Sắp xếp sao cho "nửa đầu" của mảng các phần tử <= target/2 và "nửa sau" > target
(Nguyên lý sắp xếp này giống hàm phân đoạn của Quick Sort nhưng chỉ thực hiện 1 lần)
-> Lúc này hàm sẽ dừng khi j < i (i chạy tử 0, j chạy từ n)
B3:
- Sau đó ta sẽ có 3 trường hợp:
TH1: j<0 (Tất cả phần tử đều > target) -> Pair not found
TH2: j=n-1 (Tất cả phần tử đều <= target)
+ Nếu có 2 phần tử bằng target/2 thì in ra 1 cặp
+ Không thì -> Pair not found 
TH3: Chạy vòng lặp từ đầu cho đến j (lúc này là phần tử cuối của "nửa đầu")
Chạy vòng for thứ 2 ở trong để duyệt từ cuối cho đến i
Nếu tổng bằng target thì in ra và 'or' sẽ ở từ trước Pair thứ 2
Dùng break để chặn nếu 1 trong 2 giá trị ở "nửa đầu" giống với giá trị đã có ở cặp trước
Dùng break để chặn khi đã tìm thấy giá trị ở "nửa sau"
+ Trong TH này cũng xét TH xem có 2 phần tử nào = target/2 không
3, Test case
+ input:
9
8 4 5 2 7 2 8 3 5
10
+ output:
Pair found (5, 5)
or
Pair found (8, 2)
or
Pair found (7, 3)