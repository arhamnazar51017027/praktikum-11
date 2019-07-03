#include <iostream.h>
int main () {
 structtgl
 {
 inttanggal;
 intbulan;
 inttahun;
 }
 tgl={12,4,2012};
 struct data
 {
 charkode[10];
 charnama[20];
 intharga;
 intdiskon;
 };
 struct
 {
 struct data barang;
 intjumlah;
 }
 data1={"101010","baju rajut",45000,5,10};
 struct
 {
 struct data barang;
 intjumlah;
 }
 data2={"101011","baju twistcone",65000,5,7};
 struct


 
{   struct data barang;
intjumlah;
}
data3={"101012","baju sifon",65000,5,7};
struct
{
struct data barang;
intjumlah;
}
data4={"101013","celana katun",70000,5,9};
struct
{
struct data barang;
intjumlah;
}
data5={"101014","rok sifon",60000,5,9};
struct
{
struct data barang;
intjumlah;  }
data6={"101015","rok scallop ",60000,5,8};
cout<<"\t\t--------------------------------------"<<endl;
cout<<"\t\t     DATABASE PENJUALAN APShop        "<<endl;
cout<<"\t\t--------------------------------------"<<endl;
cout<<"Tanggalpenjualan= "<<tgl.tanggal<<"/"<<tgl.bulan<<"/"<<tgl.tahun<<endl;
cout<<endl; cout<<" Kode||  Nama\t\t|| Harga        || Diskon(%)    || Jumlah"<<endl<<endl;
cout<<data1.barang.kode<< " ||"
<<data1.barang.nama<<"\t|| "
<<data1.barang.harga<<"\t|| "
<<data1.barang.diskon<<"\t\t|| "
<<data1.jumlah<<endl<<endl;
cout<<data2.barang.kode<< " ||"
<<data2.barang.nama<<"\t|| "
<<data2.barang.harga<<"\t|| "
<<data2.barang.diskon<<"\t\t|| "
<<data2.jumlah<<endl<<endl;


