#include<iostream>
#include<stdlib.h>
using namespace::std;

struct data
{
    char nama[40];
    int nim;
    double nilai2;
};

int d,ketemu,cari,rubah,hapus;
data dta[20];
data temp;


main ()
{
    cout<<"\nMasukkan yang ingin anda masukkan = ";
    cin>>d;

    for (int t=1; t<d; t++)
    {
        cout<<"\nData ke- "<<t<<" = ";
        cout<<"\nMasukkan Nama Anda = ";
        cin>>dta[t].nama;
        cout<<"\nMasukkan NIM Anda  = ";
        cin>>dta[t].nim;
        cout<<"\nMasukkan Nilai anda = ";
        cin>>dta[t].nilai2;
    }
    for (int t=1; t<d; t++)
    {
        cout<<"\nData ke "<<t<<" = ";
        cout<<"\nNama = "<<dta[t].nama;
        cout<<"\nNIM  = "<<dta[t].nim;
        cout<<"\nNilai= "<<dta[t].nilai2;
    }

for (int t=1; t<d; t++)
{
    system("CLS");
    for (int n=1; n<d-1; n++)
    {
        if (dta[n].nilai2>dta[n+1].nilai2)
        {
            temp.nilai2=dta[n].nilai2;
            dta[n].nilai2=dta[n+1].nilai2;
            dta[n+1].nilai2=temp.nilai2;

            temp.nim=dta[n].nim;
            dta[n].nim=dta[n+1].nim;
            dta[n+1].nim=temp.nim;

            temp.nama,dta[n].nama;
            dta[n].nama,dta[n+1].nama;
            dta[n+1].nama,temp.nama;
        }
    }
}

cout<<"\nSetelah di Sorting";
for (int n=1; n<d; n++)
{
        cout<<"\n-----------------\n";
        cout<<"\nNama = "<<dta[n].nama;
        cout<<"\nNIM  = "<<dta[n].nim;
        cout<<"\nNilai= "<<dta[n].nilai2;
}

cout<<"\nMasukkan data yang ingin anda cari = ";
cin>>cari;
ketemu=0;
cout<<"\nData yang anda cari didapatkan ";
for (int t=1; t<d; t++)
{
    if (dta[t].nim==dta[t].nim)
    {
        ketemu=1;
        cout<<t;
    }
}

if (ketemu==0)
    cout<<"\nData yang anda cari tidak didapatkan\n";

cout<<"\n--------Mengganti data-------\n";
cout<<"\nSilahkan  ubah data yang ingin anda rubah = ";
cin>>rubah;
for (int a=1; a<d; a++)
{
    if (dta[a].nim==rubah)
    {
        cout<<"\nMasukkan nilai baru yang ingin anda rubah = ";
        cin>>dta[a].nim;
    }
}

cout<<"\nData setelah dirubah ";
for (int w=1; w<d; w++)
{
    cout<<dta[w].nim;
}

cout<<"\nData yang dihapus";
cout<<"\nMasukkan data yang anda hapus = ";
cin>>hapus;
for (int l=0; l<d; l++)
{
    if (dta[l].nama==dta[l].nama)
    {
        for (int p=1; p<d; p++)
        {
            dta[p].nama==dta[p+1].nama;
        }
        d-=1;
        break;
    }
}

cout<<"\nData Baru yang anda masukkan = ";
for (int u=1; u<d; u++)
    cout<<dta[u].nama;


    }
