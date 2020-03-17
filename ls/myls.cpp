// my own ls
// Author:mizoc<yaesuft729@gmail.com>
// License:MIT
#include <dirent.h>
#include <stdlib.h>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  char const* dit;
  struct dirent* d;

  if (argc == 1) {
    dit = ".";
  } else {
    switch (*argv[1]) {
      case 'h':
			case '?':
        cout << "[Usage]  " << argv[0] << " directory" << endl;
        exit(1);
        break;
    }
    dit = argv[1];
  }

  DIR* dp = opendir(dit);
  if (dp != NULL) {
    while (1) {
      d = readdir(dp);
      if (d == NULL) {
        break;
      }
      cout << d->d_name << endl;
    }
    closedir(dp);
  } else {
    cout << "[error] could not open dir " << dit << endl;
    exit(2);
  }

  return 0;
}
