#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "rectangulo.h"
using namespace std;

int main() {
    vector<string> data;
    data = get_contents();
    vector<Rectangulo> out;
    out = organize(data);
}