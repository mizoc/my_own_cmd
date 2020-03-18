#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  FILE *fp;
  char ch;

  for (int i = 1; i <= argc; i++) {
    fp = fopen(argv[i], "r");
    if (fp == NULL) {
      cout << argv[i] << "No such file or directory" << endl;
      return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
      cout << ch;
    }
    fclose(fp);
  }
  return 0;
}
