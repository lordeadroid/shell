#include <iostream>

using namespace std;

int main(void) {
  char command[255];

  while (true) {
    cout << "$ ";
    cin >> command;
    cout << command << endl;
  }
}
