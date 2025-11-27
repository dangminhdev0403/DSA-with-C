#include <iostream>
#include <string>

using namespace std;

//! ============================================================
//! LÝ THUYẾT QUAN TRỌNG VỀ KÝ TỰ (ASCII) – BẮT BUỘC PHẢI NHỚ
//! ============================================================
//! Trong bảng mã ASCII:
//!   'A' = 65          'a' = 97
//!   'B' = 66          'b' = 98
//!   ...               ...
//!   'Z' = 90          'z' = 122
//!
//! ➤ Nhận xét cực quan trọng:
//!     Mỗi chữ thường = chữ hoa + 32
//!
//!     Ví dụ: 'a' - 'A' = 97 - 65 = 32
//!
//! ➤ Vì vậy ta có:
//!     - Chuyển CHỮ THƯỜNG → CHỮ HOA:    c = c - 32
//!     - Chuyển CHỮ HOA → CHỮ THƯỜNG:    c = c + 32
//!
//! (Chỉ áp dụng khi ký tự thật sự nằm trong khoảng A-Z hoặc a-z)
//!
//! Đây là cách chuyển đổi thủ công **không dùng hàm có sẵn**.
//! ============================================================

int main()
{
    std::string greeting = "Hello, Kitu!";

    //? c_str() trả về con trỏ const char*
    //? dùng để lấy mảng ký tự từ std::string
    const char *charArray = greeting.c_str();

    //? Duyệt từng ký tự
    for (size_t i = 0; i < greeting.size(); ++i)
    {
        char toUpper = charArray[i];

        //? Nếu là chữ thường (a-z), chuyển sang HOÀ
        if (charArray[i] >= 'a' && charArray[i] <= 'z')
        {
            //? Áp dụng công thức: thường → hoa = -32
            toUpper = charArray[i] - 32;
        }

        cout << toUpper << ' ';
    }

    return 0;
}
