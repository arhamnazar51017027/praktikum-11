#include <iostream.h>
#include <windows.h>

int main()
{

struct
{

 char nik[20];
 charnama[30];
 charjk[10];
 charalamat[40];
 char agama [10];
 charkota[10];

 }ktp;
 struct
 {
 char nim[20];
 charnama[30];
 charfk[15];
 charprodi[40];
 }ktm;
 structwaktu
 {

 	chartempat[10];
 	inttanggal;
 	intbulan;
 	inttahun;
 };
 waktutgl;
 int x;
 system ("cls";
 cout<<"\t----------------------------"<<endl;

 cout<<"\t     PENDAFATARAN KTP DAN KTM "<<endl;
 cout<<"\t------------------------------"<<endl;
 cout<<"1. ktp "<<endl;
 cout<<"2. ktm "<<endl;
 cin>>x;
 cout<<endl;
 switch(x)
 {

 case 1:
   cout<<"\t----------------------------------"<<endl;
   cout<<"\t              pendaftaran ktp     "<<endl;
   cout<<"\t----------------------------------"<<endl;
   cout<<"masukkan nik \t\t : ";
   cin>>ktp.nik;
   cout<<"masukkannama \t\t : ";
   cin>>ktp.nama;
   cout<<"masukkantempatlahir \t\t : ";
   cin>>tgl.tempat;
   cout<<"masukkantanggallahir \t\t : ";
   cin>>tgl.tanggal;
   cout<<"masukkantahunlahir \t\t : ";
   cin>>tgl.tahun;
   cout<<"masukkanjeniskelamin \t\t : ";
   cin>>ktp.jk;
   cout<<"masukkanalamat \t\t : ";
   cin>>ktp.alamat;
   cout<<"masukkankota \t\t : ";
   cin>>ktp.kota;
   cout<<"masukkanagama \t\t : ";
   cin>>ktp.agama;
   cout<<endl;

   cout<<"-------------------------------------"<<endl;
   cout<<"           HASIL CETAK KTP           "<<endl;
   cout<<"-------------------------------------"<<endl;
   cout<<"NIK\t\t\t : "<<ktp.NIK<<endl;
   cout<<"Nama\t\t\t : "<<ktp.Nama<<endl;
   cout<<"Tempat/TglLahir\t
   "<<tgl.tempat<<","<<tgl.tanggal<<"/"<<tgl.bulan<<"/"<<tgl.tahun<<endl;
   cout<<"JenisKelamin\t\t : "<<ktp.jk<<endl;
   cout<<"Alamat\t\t\t : "<<ktp.alamat<<ktp.kota<<endl;
   cout<<"Agama\t\t\t : "<<ktp.agama<<endl;
   cout<<endl;
   break;
   case 2 :
   cout<<"\t-----------------------------------------"<<endl;
    cout<<"\t           PENDAFTARAN  KTM              "<<endl;
    cout<<"\t-----------------------------------------"<<endl;
    cout<<"Masukkan NIM \t\t : ";
   cin>>ktm.NIM
   cout<<"MasukkanNama \t\t : ";
   cin>>ktm.Nama;
   cout<<"MasukkanFakultas \t : ";
   cin>>ktm.fk;   cout<<"Masukkan Prodi \t\t : ";
   cin>>ktm.prodi;
   cout<<endl;

   cout<<"-------------------------------------"<<endl;
   cout<<"           HASIL CETAK KTM           "<<endl;
   cout<<"-------------------------------------"<<endl;
   cout<<"NIM\t\t : "<<ktm.NIM<<endl;
   cout<<"Nama\t\t\t : "<<ktm.Nama<<endl;
   cout<<"Fakultas\t : "<<ktm.fk<<endl;
   cout<<"Prodi\t\t : "<<ktm.prodi<<endl;
   cout<<endl;
   break;

   default :
   cout<<"Maaf, PilihanAndaTidakSesuai"<<endl;
   }





