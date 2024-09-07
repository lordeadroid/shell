#include <iostream>

using namespace std;

int main(void) {
  string command;

  while (true) {
    cout << "$ ";
    getline(cin, command);
    cout << command << endl;
  }
}
