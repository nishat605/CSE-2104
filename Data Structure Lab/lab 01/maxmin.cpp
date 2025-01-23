#include<iostream>
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
  int max = Array[0];
  int min = Array[0];
  for (int i = 0; i < num; i++) {
    if(max< Array[i]){
        max = Array[i];
    }
    if(min> Array[i]){
        min = Array[i];
    }
  }
  cout<< "Maximum: "<<max<< endl;
  cout<< "Minimum: "<<min<< endl;
  return 0;
}