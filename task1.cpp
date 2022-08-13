#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m;
    ifstream file("in.txt");
    ofstream file2("out.txt");
    file >> n;
    int* mass1 = new int[n];
    for (int i = 0; i < n; i++) {
        file >> mass1[i];
    }
    file >> m;
    int* mass2 = new int[n];
    for (int i = 0; i < m; i++) {
        file >> mass2[i];
    }
    file2 << m << endl << mass2[m-1] << " ";
    for (int i = 0; i < m-1; i++) {
        file2 << mass2[i] << " ";
    }
    file2 << endl << n << endl;
    for (int i = 1; i < n; i++) {
        file2 << mass1[i] << " ";
    }
    file2 << mass1[0];
}