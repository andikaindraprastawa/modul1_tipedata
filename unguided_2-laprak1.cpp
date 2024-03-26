#include <iostream> 
#include <string> 
using namespace std; 
  
struct mahasiswa{    
     string nama;
     string jurusan;
     string Alamat;
     float umur;
     float ipk; 
};
  int main(){ 
  
    mahasiswa mhs; 
  
    mhs.nama="Andika Indra Prastawa";
    mhs.jurusan="Teknik Informatika";
    mhs.Alamat="Cilacap,Jawa Tengah";
    mhs.umur =19;
    mhs.ipk=3.8; 
     
    cout<<"DATA MAHASISWA"<<endl;
    cout<<"Nama    : "<<mhs.nama<<endl;
    cout<<"Jurusan : "<<mhs.jurusan<<endl;
    cout<<"alamat  : "<<mhs.Alamat<<endl;
    cout<<"umur    : "<<mhs.umur<<endl;
    cout<<"IPK     : "<<mhs.ipk<<endl; 
    return 0; 
} 
