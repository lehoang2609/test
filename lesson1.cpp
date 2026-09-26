#include <iostream>
#include <string>

using namespace std;

#define BASIC_SALARY 300
// #define: keyword khai bao hang so
// BASIC_SALARY: ten hang so
// 300: gia tri hang so
// Hang so: la 1 gia tri khong thay doi trong qua trinh thuc hien chuong trinh

int main() {
    // xu ly logic code o day 
    // khai bao 1 bien luu tru ho ten
    string full_name = "Le Minh Hoang";

    // khai bao 1 bien luu tru tuoi 
    int my_age = 23;

    // khai bao 1 bien luu tru dia chi 
    string my_address = "Ha Noi"; // su dung nhay kep
    // int a; // khong nen viet
    // int b; // khong nen viet
    bool checking = true;
    char letter = 'A'; // su dung nhay don 
    float my_point = 8.9; // so thuc 
    double my_money = 100.534; // so thuc 

    cout << full_name << endl; // in ho ten 
    cout << my_money << endl; // in so tien 
    cout << "Luong co ban : " << BASIC_SALARY << endl; // in luong co ban

    // su dung tu khoa constant de khai bao hang so 
    const double PI = 3.14; // hang so 
    cout << "Gia tri cua so PI : " << PI << endl; // in gia tri cua so PI
    // PI = 3.56; // error: khong duoc phep thay doi gia tri cua hang so 
    // uu tien su dung tu khoa const de khai bao hang so (han che su dung #define)

    int number1 = 4;
    int number2 = 9;
    int result = number2 % number1;
    cout << result << endl; // in ket qua cua phep chua lay du (chi ap dung cho so nguyen)
    cout << (number1 + number2) << endl; // in ket qua cua phep cong
    cout << (number1 - number2) << endl; // in ket qua cua phep tru
    cout << (number1 * number2) << endl; // in ket qua cua phep nhan 

    // = : Phep gan gia tri
    // == : Phep so sanh bang
    // != : Phep so sanh khong bang
    bool kiem_tra = number1 == number2; // so sanh 2 so nguyen
    cout << kiem_tra << endl; // in ket qua cua phep so sanh (0: false, 1: true) : bang nhau la sai 
    bool kiem_tra2 = number1 != number2; // so sanh 2 so nguyen
    cout << kiem_tra2 << endl; // in ket qua cua phep so sanh (0: false, 1: true) : khong bang nhau la dung

    int number3 = 9;
    int number4 = 10;
    bool kiem_tra3 = (number1 > number2) && (number3 < number4); // AND => 0 == false
    bool kiem_tra4 = (number1 > number2) || (number3 < number4); // OR => 1 == true 
    cout << kiem_tra3 << endl; // 0 == false
    cout << kiem_tra4 << endl; // 1 == true 

    // Thu tu thuc hien phep toan: () -> ! -> (* / %) -> (+ -) -> Quan he (>, <, >=, <=, ==, !=) -> AND (&&) -> OR (||)

    return 0;
}