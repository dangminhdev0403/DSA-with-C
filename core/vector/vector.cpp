#include <bits/stdc++.h>
#include <vector> // Thư viện chứa cấu trúc dữ liệu vector
using namespace std;

/*
    ✅ Vector trong C++ (Dynamic Array)
    - Là mảng động: tự mở rộng kích thước khi thêm phần tử.
    - Truy cập phần tử: O(1)
    - Thêm phần tử cuối: O(1) amortized
    - Xóa cuối: O(1)
    - Thêm / xóa ở giữa: O(n) (do phải dịch phần tử)
    - Dùng khi: cần mảng co giãn linh hoạt.

    Các hàm quan trọng:
    - push_back(x) / emplace_back(x) : thêm phần tử cuối
    - pop_back() : xóa phần tử cuối
    - size() : số lượng phần tử
    - empty() : kiểm tra có rỗng không
    - clear() : xóa toàn bộ phần tử
    - v[i] : truy cập phần tử theo index
*/

int main()
{
    vector<int> v; // Khởi tạo vector rỗng kiểu int

    // ✅ Thêm phần tử vào cuối vector
    // push_back: thêm bản sao của giá trị
    // emplace_back: tạo phần tử trực tiếp tại cuối => nhanh hơn (đặc biệt cho object)
    v.push_back(10);
    v.emplace_back(20);

    // ✅ Truy cập phần tử bằng index: O(1)
    cout << "First element: " << v[0] << endl;

    // ✅ Duyệt vector bằng iterator
    /*
        Iterator = con trỏ dùng để duyệt container STL
        begin() -> iterator đầu
        end() -> iterator sau phần tử cuối
        auto giúp tự suy luận kiểu iterator (phù hợp với container)
    */
    cout << "Via Iterator: ";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " "; // *it lấy giá trị iterator đang trỏ tới
    }
    cout << endl;

    // ✅ Duyệt foreach (range-based loop) – cách modern C++
    cout << "Via Range-based loop: ";
    for (const auto &val : v) // const auto& giúp tránh copy, tối ưu hơn
    {
        cout << val << " ";
    }
    cout << endl;

    // ✅ Một số thao tác thông dụng khác
    cout << "Vector size: " << v.size() << endl; // Số phần tử
    cout << "Is empty? " << v.empty() << endl;   // Check rỗng
    // v.clear();                                      // Xóa tất cả phần tử

    return 0;
}
