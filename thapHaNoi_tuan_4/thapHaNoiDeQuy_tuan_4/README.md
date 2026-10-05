# Giải bài toán Tháp Hà Nội bằng phương pháp Đệ quy
Họ và tên: Nguyễn Đức Quý
MSSV: 202514351
Ngôn ngữ: C
1. Mô tả Bài toán
+ Input:
- Số nguyên n (Số đĩa trong bài toán)
(Mặc định cột nguồn A và cột đích B;có thể thay đổi tên cũng được)
+ Output:
- Hiển thị số nguyên là số bước thực hiện
- Hiển thị mỗi lần chuyển từ cột 'nào' sang cột 'nào'
2. Giải thuật
+ Thư viện sử dụng: stdio.h ; math.h
- B1: Khởi tạo giá trị nguyên int n
- B2: Dùng printf để hiển thị số bước theo công thức 2^n-1
- B3: Tạo hàm thapHaNoi(int n, char nguồn, char đích, char trung gian)
. Bài toán cơ sở
- Nếu n==1 thì A->B( nguồn -> đích)
. Bài toán tổng quát
- Nếu n>1 thì đệ quy
- Chuyển (n-1) đĩa từ A->C (nguồn là A, đích là C)
(Gọi lại hàm thapHaNoi)
- Chuyển 1 đĩa còn lại từ A->B
- Chuyển (n-1) đĩa từ C về B (nguồn là C, đích là B)
3. Test Case
input n=1
output {
    1
A ->B
}
input n=2
output {
    3
A ->C
A ->B
C ->B
}
input n=4
output {
    15
A ->C
A ->B
C ->B
A ->C
B ->A
B ->C
A ->C
A ->B
C ->B
C ->A
B ->A
C ->B
A ->C
A ->B
C ->B
}