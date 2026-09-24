#include <iostream>
#include <string>

// using std::cout;
// using std::endl;
// comment tren 1 dong, C++ bo qua dong nay

using namespace std;

int main(){
    int id; // ma so 
    string address; // dia chi

    // cout << "Hello World" << endl;
    // cout << "Codegym C++" << endl;
    
    cout << "Moi nhap ma so: " <<endl; // nhap du lieu tu ban phim
    cin >> id;
    cin.ignore(); // xoa bo cu phap xuong dong khi nhap du lieu 

    cout << "Moi nhap dia chi: " <<endl;
    // cin >> address; // chi nhap ki tu khong co khoang trang
    getline(cin, address); // nhap du lieu co khoang trang

    cout << "ID: " << id << " - Address: " << address << endl;

    return 0;
}