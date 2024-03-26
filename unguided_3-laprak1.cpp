#include <iostream> 
#include <map> 
#include <string> 
using namespace std; 
 
int main() { 
  map<int, string> nama_mahasiswa { { 1, "Andika"}, { 2, "tiyas" }, { 3, "suci " }, { 4, "asep" }, { 5, "aziz" } }; 
 
  cout << nama_mahasiswa[1] << " " << nama_mahasiswa[3]<<endl; 
} 
