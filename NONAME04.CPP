#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main()
{
struct tgl
{
unsigned int hari;
unsigned int bulan;
unsigned int tahun;
};
struct alamat
{
char jalan[30];
char kota[20];
};
struct
{
char nama[40];
struct tgl masuk;
struct alamat tanggal;
float gaji;
}karyawan={"yuni chairun nisa",11, 06, 2008, "jl.kedondong 56", "lumajang",900000};
cout<<"\n\n DATA KARYAWAN \n";
cout<<"\n-------------------------\n\n";
cout<<"nama karyawan : "<<karyawan.nama<<"\n";
cout<<"tanggal masuk : "<<karyawan.masuk.hari <<karyawan.masuk,bulan<<karyawan.masuk.tahun<<"\n";
cout<<"alamat: "<<karyawan.tinggal.jalan <<""<<karyawan.tinggal/kota<<"\n";
cout<<"gaji per bulan : Rp "<<karyawan.gaji;
getch();
}
