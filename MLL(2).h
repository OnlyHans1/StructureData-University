#ifndef MLL(2)_H_INCLUDED
#define MLL(2)_H_INCLUDED

#include <iostream>

using namespace std;

// Parent
typedef struct elmRektor *address_rektor;
typedef struct elmDekan *address_dekan;
typedef struct elmDosen *address_dosen;

//Child
typedef struct elmWarek *address_warek;
typedef struct elmKaprodi *address_kaprodi;
typedef struct elmKorlab *address_korlab;
typedef struct elmAslab *address_aslab;
typedef struct elmAsprak *address_asprak;

//Parent
struct Rektor{
    string id;
    string nama;
    string periode;
};

struct Dekan{
    string id;
    string nama;
    string fakultas;
};

struct Dosen{
    string id;
    string nama;
    string kodeDosen;
};

//Child
struct Warek{
    string id;
    string nama;
    string bidang;
};

struct Kaprodi{
    string id;
    string nama;
    string prodi;
};

struct Korlab{
    string id;
    string nama;
    string namaLab;
};

struct Aslab{
    string id;
    string nama;
    string nim;
};

struct Asprak{
    string id;
    string nama;
    string kodeAsprak;
};

struct elmKaprodi {
    Kaprodi info;
    address_kaprodi next;
};

struct elmWarek {
    Warek info;
    address_warek next;
    address_warek prev;
};

struct elmKorlab {
    Korlab info;
    address_korlab next;
    address_korlab prev;
};

struct elmAslab {
    Aslab info;
    address_aslab next;
};

struct elmAsprak {
    Asprak info;
    address_asprak next;
};

//Parent
struct elmRektor {
    Rektor info;
    address_rektor next;
};

struct elmDekan {
    Dekan info;
    address_dekan next;
    address_dekan prev;
};

struct elmDosen {
    Dosen info;
    address_dosen next;
    address_dosen prev;
};

struct ListRektor {
    address_rektor first;
};

struct ListDekan {
    address_dekan first;
    address_dekan last;
};

struct ListDosen {
    address_dosen first;
    address_dosen last;
};

//Rektor List 1
void createListRektor(ListRektor &L);

address_rektor createParentRektor(string id, string nama, string periode);

void insertParentRektor(ListRektor &L, address_rektor p);

address_rektor findParentRektor(ListRektor L, string id);

void deleteParentRektor(ListRektor &L, string id);

void printParentRektor(ListRektor L);

//Warek
address_warek createChildWarek(string id, string nama, string bidang);

void insertChildWarek(address_rektor p, address_warek q);

address_warek findChildWarek(address_rektor p, string id);

void deleteChildWarek(address_rektor p, string id);

void printChildWarek(address_rektor p);

//Dekan List 2
void createListDekan(ListDekan &L);

address_dekan createParentDekan(string id, string nama, string fakultas);

void insertParentDekan(ListDekan &L, address_dekan p);

address_dekan findParentDekan(ListDekan L, string id);

void deleteParentDekan(ListDekan &L, string id);

void printParentDekan(ListDekan L);

//Kaprodi
address_kaprodi createChildKaprodi(string id, string nama, string prodi);

void insertChildKaprodi(address_dekan p, address_kaprodi q);

address_kaprodi findChildKaprodi(address_dekan p, string id);

void deleteChildKaprodi(address_dekan p, string id);

void printChildKaprodi(address_dekan p);

//Korlab
address_korlab createChildKorlab(string id, string nama, string namaLab);

void insertChildKorlab(address_dekan p, address_korlab q);

address_korlab findChildKalab(address_dekan p, string id);

void deleteChildKorlab(address_dekan p, string id);

void printChildKorlab(address_dekan p);

//Dosen List 3
void createListDosen(ListDosen &L);

address_dosen createParentDosen(string id, string nama, string kodeDosen);

void insertParentDosen(ListDosen &L, address_dosen p);

address_dosen findParentDosen(ListDosen L, string id);

void deleteParentDosen(ListDosen &L, string id);

void printParentDosen(ListDosen L);

//Aslab
address_aslab createChildAslab(string id, string nama, string nim);

void insertChildAslab(address_dosen p, address_aslab q);

address_aslab findChildAslab(address_dosen p, string id);

void deleteChildAslab(address_dosen p, string id);

void printChildAslab(address_dosen p);

//Asprak
address_asprak createChildAsprak(string id, string nama, string kodeAsprak);

void insertChildAsprak(address_dosen p, address_asprak q);

address_asprak findChildAsprak(address_dosen p, string id);

void deleteChildAsprak(address_dosen p, string id);

void printChildAsprak(address_dosen p);

//Semua List
void printAll(ListRektor LR, ListDekan LD, ListDosen LD);
#endif // MLL(2)_H_INCLUDED
