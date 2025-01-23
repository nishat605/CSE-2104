#include <iostream>
using namespace std;

int main() {
  system("cls");

  int num;
  cout << "Input Array Size: ";
  cin >> num;

  int Array[num];
  for (int i = 0; i < num; i++) {
    cin >> Array[i];
  }
  for (int i = 0; i < num; i++) {
    cout << Array[i] << " ";
  }
  return 0;
}