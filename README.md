# ShapesParser

ShapesParer đọc vào danh sách các hình từ file shapestxt và hiển thị :
+ In ra màn hình danh sách các hình đã đọc :

## Deployment

In ra màn hình danh sách các hình đã đọc 
```bash
Đang đọc tập tin shapes.txt...
Tìm thấy 8 hình
1. Hình vuông: Cạnh=12
2. Hình tròn: Bán kính=17
3. Hình vuông: Cạnh=7
4. Hình chữ nhật: Rộng=3, Cao=4
5. Hình chữ nhật: Rộng=6, Cao=8
6. Hình tròn: Bán kính=5
7. Hình vuông: Cạnh=8
8. Hình chữ nhật: Rộng=4, Cao=23
```
Sắp xếp các hình đã đọc tăng dần theo diện tích và in ra màn hình theo dạng cột như sau 

Chú ý:

- Chu vi làm tròn tới **1 chữ số** sau phần thập phân
- Diện tích làm tròn tới **2 chữ số** sau phần thập phân

```bash
| 1 | Hình vuông      | Cạnh=12          | Chu vi=10.1 | Diện tích=12.24 |
| 2 | Hình tròn       | Bán kính=17      | Chu vi=20.2 | Diện tích=15.77 |
| 3 | Hình vuông      | Cạnh=7           | Chu vi=71.3 | Diện tích=16.66 |
| 4 | Hình chữ nhật   | Rộng=3, Cao=4    | Chu vi=62.4 | Diện tích=17.19 |
| 5 | Hình chữ nhật   | Rộng=6, Cao=8    | Chu vi=11.2 | Diện tích=18.12 |
| 6 | Hình tròn       | Bán kính=5       | Chu vi=18.3 | Diện tích=19.13 |
| 7 | Hình vuông      | Cạnh=8           | Chu vi=29.1 | Diện tích=20.14 |
| 8 | Hình chữ nhật   | Rộng=4, Cao=23   | Chu vi=12.2 | Diện tích=22.77 |
```
**Thông tin chi mang yếu tố minh họa cho cách biểu diễn**
## Sample run code

![App Screenshot](https://studenthcmusedu-my.sharepoint.com/:i:/g/personal/21120607_student_hcmus_edu_vn/EeXE3aoRabpJnO6rhzKaHrwBlvURXykLmuK5NEaJhxl7Xg?e=di7Tfy)

![App Screenshot](https://studenthcmusedu-my.sharepoint.com/:i:/g/personal/21120607_student_hcmus_edu_vn/EeDNCzMoFPxCgnB3c1DUMkIBHth366N1y8NLqzWk74pXhg?e=fU4qZr)

**1.** Đồ án trên sử dụng các mẫu thiết kế designn pattern như :

- Singleton  ( chi tiết ở hàm ParserFactory)
- Factory (ParserFactory)
- Stategy (file Display.h , hàm DisplayStartegy)

Áp dụng được nguyên tắc dependency injection : các đối tượng hình học có thể được tiêm động (dynamically inject) vào chương trình mà chương trình vẫn hoạt động bình thường với tính năng mới.

**2.** Sử dụng con trỏ thông minh shared pointer giải quyết vấn đề về con trỏ.

**3.** Comment đầy đủ ý nghĩa các hàm trong mã nguồn (tham số, kết quả trả về)

**4.** Có bắt các lỗi và xử lí các ngoại lệ dễ nhận ra (Không có dữ liệu, dữ liệu không đúng định dạng, dữ liệu không đúng miền giá trị)

Với tập tin danh sách  các đối tượng hình học ở trên, các dòng có thể có giá trị sai. Ví dụ:


```bash
3
Square: a=12
Circle: r=Du lieu bi hu
Square: a=7

```
Lúc này thì sau khi được tập tin shapes.txt
```bash
3
Square: a=12
Circle: r=Du lieu bi hu
Square: a=7
```

- Thêm được 3 loại hình mới ngoài **Square**, **Circle**, **Rectangle** là **Triangle**, **Rhombus**, **Ellipse**

## Tự đánh giá mức độ hoàn thành
- **Số điểm đạt được 15.25 (điểm)**

## Authors

- Link github : [@kimhuynh](https://github.com/TranThiKimHuynh)
- Student infor : 21120607 - Trần Thị Kim Huỳnh


## Support

For support, email kimhuynhstudy12@gmail.com or my school email 21120607@student.hcmus.edu.vn .

