
#include <iostream>

void printTriangLe(int rows) {
      for (int i = 1; i <= rows; ++i) {
    //printspace
    for (int j= 1; j <= rows - i; ++j){
        std::cout << " ";
        }
    // print stars
    for (int k = 1; k <= ( 2 * i - 1); ++k){
        std::cout <<"";
      }
        std::cout <<std::endl;
    }

}


int main() {
  int rows;

    std::cout << "Masukkan jumlah baris untuk segitiga bintang: \n";
    std::cin >> rows;

    printTriangLe(rows);
    return 0;
}
